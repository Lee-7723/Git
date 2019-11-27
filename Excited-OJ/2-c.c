#include<stdio.h>
int main()
{
	long a,b;
	float e,f;
	char c,d;
	scanf("%ld", &a);
	scanf("%c", &d);
	scanf("%c", &c);
	scanf("%ld", &b);
	e=(float)a/(float)b;
	f=e*100;
	printf("%ld %ld %c\n", a,b,c);
	printf("%ld %ld %ld %ld %ld\n",a+b,a-b,a*b,a/b,a%b);
	printf("The ratio of %ld versus %ld is %.2f.\n",a,b,e);
	printf("The ratio of %ld / %ld is %.2f%%.",a,b,f);
return 0;
}
