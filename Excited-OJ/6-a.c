#include<stdio.h>
int main()
{
	char c;
	int n,q1,q2,q3,q4,q5;
	long long m;
	float  f;
	double d;
	scanf("%c",&c);
	q1=sizeof("%c", c);
	scanf("%d",&n);
	q2=sizeof("%d", n);
	scanf("%lld",&m);
	q3=sizeof("%lld", m);
	scanf("%f",&f);
	q4=sizeof("%f", f);
	scanf("%lf",&d);
	q5=sizeof("%lf", d);
	printf("Size of '%c' is %d .\n",c,q1);
	printf("Size of %d is %d .\n",n,q2);
	printf("Size of %lld is %d .\n",m,q3);
	printf("Size of %.3f is %d .\n",f,q4);
	printf("Size of %.3lf is %d .\n",d,q5);
}