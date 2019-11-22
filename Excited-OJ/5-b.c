#include<stdio.h>
int main()
{
	long a, b;
	char c;
	scanf("%ld %c %ld", &a, &c, &b);
	if (c == '+') printf("%ld", a + b);
	else if (c == '-') printf("%ld", a - b);
	else if (c == '*') printf("%ld", a * b);
	else if (c == '/') printf("%ld", a / b);
	else if (c == '%') printf("%ld", a % b);
}