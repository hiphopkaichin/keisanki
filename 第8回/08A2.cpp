#include <stdio.h>
#include <math.h>
#include "Point.h"
int main()
{
	Point a("Coordinates of initial point (x y): ");
	Point b("Coordinates of final point (x y): ");
	printf("Distance = %.2f",a.distance(b));
	return 0;
}
