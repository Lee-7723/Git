#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if (a > b && a > c && a > d && a > e) printf("%d", a);
	else if (b > a && b > c && b > d && b > e) printf("%d", b);
	else if (c > b && c > a && c > d && c > e) printf("%d", c);
	else if (d > b && d > c && d > a && d > e) printf("%d", d);
	else if (e > b && e > c && e > d && e > a) printf("%d", e);
}