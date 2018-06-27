#include <stdio.h>
typedef struct point
{
	int x;
	int y;
}point;
void scalePoint(point *, int );

int main()
{
	point p;
	p.x = 5;
	p.y = 7;
	point *ptp;
	ptp = &p;
	ptp->x = 10;
	ptp->y = 20;
	printf("x=%d y=%d\n", p.x, p.y);
	scalePoint(ptp, 3);
	printf("x=%d y=%d\n", p.x, p.y);
	return 0;
}
void scalePoint(point *ptr, int i)
{
	ptr->x = ptr->x*i;
	ptr->y = ptr->y*i;
}