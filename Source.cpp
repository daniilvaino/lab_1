#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cmath>

int main()
{
	double x1, x2, x3, y1, y2, y3;
	double l1, l2, l3;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	l1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	l2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	l3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	double p = (l1 + l2 + l3) / 2;
	double S = sqrt(p * (p - l1) * (p - l2) * (p - l3));
	printf("S=%lf", S);
	return 0;
}