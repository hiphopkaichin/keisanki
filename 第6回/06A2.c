#include <stdio.h>
#include <math.h>

typedef struct point
{
	double x;
	double y;
}POINT;

int main()
{
	double x,y,deffx,deffy,far;
	POINT start;
	POINT end;
	scanf("%lf",&x);
	start.x = x;
	scanf("%lf",&y);
	start.y = y;
	scanf("%lf",&x);
	end.x = x;
	scanf("%lf",&y);
	end.y = y;
	printf("始点座標 (x y): %.1f %.1f\n",start.x,start.y);
	printf("終点座標 (x y): %.1f %.1f\n",end.x,end.y);
	deffx = end.x - start.x;
	deffy = end.y - start.y;
	deffx = deffx*deffx;
	deffy = deffy*deffy;
	far = deffx + deffy;
	printf("距離 = %.2f",sqrt(far));
	return 0;
}
