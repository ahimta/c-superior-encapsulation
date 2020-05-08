#ifndef POINT_H
#define POINT_H

typedef struct Point Point;

Point *Point_init(long x, long y);

int Point_x(Point *point, long *x_out);

int Point_y(Point *point, long *y_out);

#endif
