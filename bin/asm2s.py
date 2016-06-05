#!/usr/bin/env python

"""Converts VASM 'Motorola' syntax to a syntax accepted by GNU as."""

from __future__ import print_function

def process(line):
    """Converts keywords and register names."""
    import re
    for pat,repl in process.subs:
        line = re.sub(pat,repl,line)
    return line

process.subs = [
    (r"public",     r".global"),
    (r"macro",      r".macro" ),
    (r"endm",       r".endm"),
    (r"\$",         r"0x"),
    (r",d([0-7])$", r",%d\1"),
    (r",a([0-7])$", r",%a\1"),
    (r"d([0-7]),",  r"%d\1,"),
    (r"a([0-7]),",  r"%a\1,"),
]

def count_macroargs(lines):
    """Counts macro arguments in VASM syntax."""
    import re
    d = {}
    for l in lines:
        mo = re.search(r'\\([1-9])', l)
        if mo and len(mo.groups()):
            d[mo.groups()[0]] = d.get(mo.groups()[0],0) + 1
    return len(d.keys())

def replace_macroargs(line):
    """Renames macro argument name \X to \argX."""
    import re
    return re.sub(r'\\([1-9])', r'\\arg\1', line)

def process_macro(lines):
    """Converts assembly macro arguments."""
    istart, iend = -1, -1
    for i,l in enumerate(lines):
        if l.find('.macro') != -1:
            istart = i
        elif l.find('.endm') != -1:
            iend = i
            n = count_macroargs(lines[istart:iend])
            lines[istart] = lines[istart].rstrip() + ' %s\n' % \
                            ' '.join([ ('arg%d' % (a+1)) for a in range(n) ])
            for im, lm in enumerate(lines[istart+1:iend], istart+1):
                lines[im] = replace_macroargs(lm)
            
def main():
    """Reads a file from stdin or command line and converts VASM 'Motorola'
    syntax to a syntax accepted by GNU as."""
    
    import fileinput
    lines = [ line for line in fileinput.input() ]
    for i,l in enumerate(lines):
        lines[i] = process(l)
    process_macro(lines)
    for l in lines:
        print(l,end="")
                    
if __name__ == '__main__':
    try:
        main()
    except KeyboardInterrupt:
        pass
