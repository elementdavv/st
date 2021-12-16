#include <X11/Xft/Xft.h>
#include <harfbuzz/hb.h>
#include <harfbuzz/hb-ft.h>

// this file is used by x.c, and is irrelevent to hb.c
#ifndef MYHB_H
#define MYHB_H

void hbunloadfonts();
void hbtransform(XftGlyphFontSpec *, const Glyph *, size_t, int, int);

#endif
