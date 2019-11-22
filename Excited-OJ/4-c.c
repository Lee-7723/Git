#include<stdio.h>
int main()
{
	float a=0, b=0, c=0;
	scanf("%f%f%f", &a, &b, &c); 
	int A, B, C;
	A = (float)a * 1000;
	B = (float)b * 1000;
	C = (float)c * 1000;
	if (A-B == C ) printf("yes");
	else printf("no");
	return 0;
}