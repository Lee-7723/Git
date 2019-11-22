#include<stdio.h>
int main()
{
	double a;
	char b;
	scanf("%lf %c", &a, &b);
	if (b=='F')
	{
		if ((a - 32) / 1.8 < -273.15) printf("Invalid");
		else printf("%.2f C", (a - 32) / 1.8);
	}
	else if(b=='C')
	{
		if (a  < -273.15)  printf("Invalid");
		else printf("%.2f F", a * 1.8 + 32);
	}
}