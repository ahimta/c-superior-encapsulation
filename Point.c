#include <stdlib.h>
#include <string.h>

#include "Point.h"

struct Point
{
  long x;
  long y;
};

Point *Point_init(long x, long y)
{
  Point *point = malloc(sizeof(*point));

  if (point == NULL)
  {
    return NULL;
  }

  memset(point, 0, sizeof(Point));

  point->x = x;
  point->y = y;

  return point;
}

int Point_x(Point *point, long *x_out)
{
  if (point == NULL || x_out == NULL)
  {
    return -1;
  }

  *x_out = point->x;

  return 0;
}

int Point_y(Point *point, long *y_out)
{
  if (point == NULL || y_out == NULL)
  {
    return -1;
  }

  *y_out = point->y;

  return 0;
}
