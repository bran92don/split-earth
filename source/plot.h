#ifndef _plot_h_
#define _plot_h_

#include <gba_types.h>

struct Graphics_;

void slow_line(int x1, int y1, int x2, int y2, u32 clr, 
	struct Graphics_ * g);

void bmp8_plot(int x, int y, u32 clr, struct Graphics_ * g);

#endif
