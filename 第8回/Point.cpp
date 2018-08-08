#include <stdio.h>
#include <math.h>

#include "Point.h"

Point::Point(const char *prompt)
{
    printf("%s", prompt);
    fflush(stdout);
    scanf("%lf %lf", &x, &y);
}

double Point::distance(Point other)
{
    return sqrt((x-other.x)*(x-other.x) + (y-other.y)*(y-other.y));
}

