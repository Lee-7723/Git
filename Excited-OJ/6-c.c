#include<stdio.h>
int main()
{
	int a, b, c,A,B,C;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b&& b > c)
	{
		A = a;
		B = b;
		C = c;
	}
	else if (a > c&& c > b)
	{
		A = a;
		B = c;
		C = b;
	}
	else if (b > a&& a > c)
	{
		A = b;
		B = a;
		C = c;
	}
	else if (b > c&& c > a)
	{
		A = b;
		B = c;
		C = a;
	}
	else if (c > a&& a > b)
	{
		A = c;
		B = a;
		C = b;
	}
	else if (c > b&& b > a)
	{
		A = c;
		B = b;
		C = a;
	}
	if (A - B < C && A - C < B) printf("yes");
	else printf("no");
	return 0;
}