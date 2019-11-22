#include<stdio.h>
int main()
{
	long a, b, c, d, e,f;
	scanf("%ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f);
	printf("%ld", (a + b) * c / d % (e - f));
}