#ifndef TYPES_H
#define TYPES_H

struct GFRAME
{
  short xmin, ymin, xmax, ymax;
};

struct GRECT
{
  short s, y, w, h;
};

struct IMG_status
{
  void*  data;
  GRECT  r;
  short  crs_x;
  short  crs_y;
  short  unk1;
  short  unk2;
  char   crsoff;
  char   unk3;
  char   unk4;
  char   unk5;
  int    unk6;
  short  font;
  GFRAME clip;
};

#endif
