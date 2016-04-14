TARGET = HELLO.PRG
BASE = 0x001e0000

SOURCES = hello.c

BINDIR = ../bin

COMMON_DIR     = ../common
COMMON_SOURCES = header.asm syscalls.asm

OBJECTS = $(COMMON_SOURCES:%.asm=%.vobj) $(SOURCES:.c=.vobj)

VASM  = vasmm68k_mot
VASM_FLAGS = -phxass -m68000 -no-opt -Fvobj -rangewarnings 
VBCC  = vbccm68k
VBCC_FLAGS = -cpu=68000 -const-in-data -O=0
VLINK = vlink
VLINK_FLAGS = -brawbin1 -Bstatic -Ttext $(BASE)

CFLAGS  = $(VBCC_FLAGS) -I$(COMMON_DIR)
LDFLAGS = $(VLINK_FLAGS)

IMAGE = $(TARGET:%.PRG=%.IMG)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(VLINK) $(LDFLAGS) -o $@ $^
# prepend base address (depends on xxd from vim)
	/bin/echo $(BASE) | xxd -r | cat - $@ > $@.tmp
# prepend file magic
	/bin/echo -ne '\x01\x01\x01\x0b\x02\x01' | cat - $@.tmp > $@
	rm -f $@.tmp

%.vobj: %.asm
	$(VASM) $(VASM_FLAGS) -o $@ $<

%.vobj: $(COMMON_DIR)/%.asm
	$(VASM) $(VASM_FLAGS) -o $@ $<

%.asm: %.c
	$(VBCC) $(CFLAGS) -o=$@ $<

clean:
	rm -rf $(TARGET) $(OBJECTS) $(IMAGE) .img.tmp *~

image: $(IMAGE)
$(IMAGE): $(TARGET)
	rm -rf .img.tmp
	mkdir -p .img.tmp/PROGRAM
	cp $(BINDIR)/LOADER.LOD .img.tmp/PROGRAM
	cp $(TARGET) .img.tmp/PROGRAM
	s3img write -a .img.tmp $(IMAGE)

#.PRECIOUS: $(SOURCES:%.c=%asm)
.PHONY: all clean image
