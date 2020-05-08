#include <stdio.h>
#include <stdlib.h>

#include "Point.h"

int main()
{
  Point *point = Point_init(42, 24);

  long x;
  long y;

  if (!(Point_x(point, &x) == 0 && Point_y(point, &y) == 0))
  {
    free(point);
    return -1;
  }

  // NOTE: This wouldn't compile since the user of `Point` doesn't know of its
  // members.
  // printf("Hello world (%ld, %ld)!\n", point->x, point->y);

  printf("Hello world (%ld, %ld)!\n", x, y);

  free(point);
  return 0;
}
