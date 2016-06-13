#ifndef DISPLAY_H
#define DISPLAY_H
#include "matrix.h"
color change_color( int i );
void plot( screen s, color c, int x, int y);
void plotz(screen s, color c, int x, int y, double z, struct matrix * buffz);
void clear_screen( screen s);
void save_ppm( screen s, char *file);
void save_extension( screen s, char *file);
void display( screen s);
#endif
