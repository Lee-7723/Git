#include<stdio.h>
int main()
{
	float a, b;
	scanf("%f", &a);
	if (a <= 3000)
	{
		b = a * 0.005;
		printf("%.1f", b);
	}
	else if(a>3000&&a<=5000)
	{
		b = a * 0.01;
		printf("%.1f", b);
	}
	else if (a > 5000 && a <= 10000)
	{
		b = a * 0.015;
		printf("%.1f", b);
	}
	else if (a > 10000)
	{
		b = a * 0.02;
		printf("%.1f", b);
	}
}