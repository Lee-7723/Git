#include<stdio.h>
int main()
{
	float a, b, c;
	int A, B, C,D,E;
	scanf("%f %f %f", &a, &b, &c);
	A = 1000 * a;
	B = 1000 * b;
	C = 1000 * c;
	if (A >= B) D = A - B;
	else D = B - A;
	if (B >= C) E = B - C;
	else E = C - B;
	if (E == D) printf("yes");
	else printf("no");
	return 0;
}