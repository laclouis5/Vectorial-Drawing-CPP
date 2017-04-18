#include "FLigne.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

#include "CPoint.h"
#include "CPixel.h"
#include "CImage.h"
#include "CSegment.h"
#include "FPoint.h"

void TracerLigne (CSegment *seg, CImage   *img )
{
  int dx  =  abs (seg->X2 - seg->X1);
  int sx  = seg->X1 < seg->X2 ? 1:-1;
  int dy  = -abs (seg->Y2 - seg->Y1);
  int sy  = seg->Y1 < seg->Y2 ? 1:-1;
  int err = dx + dy, e2; /* error value e_xy */


  for (;;){  /* loop */

      CPoint *point = new CPoint(seg->X1, seg->Y1, seg->couleur);
      TracerPoint(point, img);

    if (seg->X1 == seg->X2 && seg->Y1 == seg->Y2) break;
    e2 = 2 * err;
    if (e2 >= dy) { err += dy; seg->X1 += sx; } /* e_xy+e_x > 0 */
    if (e2 <= dx) { err += dx; seg->Y1 += sy; } /* e_xy+e_y < 0 */
  }
}
