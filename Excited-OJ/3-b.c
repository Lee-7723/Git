#include <stdio.h>
int main()
{
	int a,b;
	float f;
	scanf("%d %f %d",&a,&f,&b);
	printf("%d%d\n",a,b);
	printf("%d %d\n",b,a);
	printf("%.2f %d %d",f,a,b);
}
