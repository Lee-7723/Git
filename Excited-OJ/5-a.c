#include<stdio.h>
int main()
{
	float a,b,c,d,i=0;
	scanf("%f%f", &a, &b);
	c = -a;
	while (i < b)
	{
		c = c + 2 * a;
		a = a / 2;
		i++;
	}
	printf("distance=%.1f,height=%.1f",c,a);
}