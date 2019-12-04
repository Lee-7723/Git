<<<<<<< HEAD
#include <stdio.h>
int main()
{
	int a,b;
	float f;
	scanf("%d %f %d",&a,&f,&b);
	printf("%10d%10.1f%10d\n",a,f,b);
	if(a>0) printf("%+-10d",a);
	else if(a==0) printf("%-10d",a);
	else if(a<0) printf("%-10d",a);
	if(f>0) printf("%+-10.2f",f);
	else if(f==0) printf("%-10.2f",f);
	else if(f<0) printf("%-10.2f",f);
	if(b>0) printf("%+-10d",b);
	else if(b==0) printf("%-10d",b);
	else if(b<0) printf("%-10d",b);
	printf("Hello\n");
	printf("###################################\n");
	if(a>0) printf("%+10d",a);
	else if(a==0) printf("%10d",a);
	else if(a<0) printf("%10d",a);
	if(f>0) printf("%+10.2f",f);
	else if(f==0) printf("%10.2f",f);
	else if(f<0) printf("%10.2f",f);
	if(b>0) printf("%+10d\n",b);
	else if(b==0) printf("%10d\n",b);
	else if(b<0) printf("%10d\n",b);
	printf("012345678901234567890123456789");
}
=======
#include <stdio.h>
int main()
{
	int a,b;
	float f;
	scanf("%d %f %d",&a,&f,&b);
	printf("%10d%10.1f%10d\n",a,f,b);
	if(a>0) printf("%+-10d",a);
	else if(a==0) printf("%-10d",a);
	else if(a<0) printf("%-10d",a);
	if(f>0) printf("%+-10.2f",f);
	else if(f==0) printf("%-10.2f",f);
	else if(f<0) printf("%-10.2f",f);
	if(b>0) printf("%+-10d",b);
	else if(b==0) printf("%-10d",b);
	else if(b<0) printf("%-10d",b);
	printf("Hello\n");
	printf("###################################\n");
	if(a>0) printf("%+10d",a);
	else if(a==0) printf("%10d",a);
	else if(a<0) printf("%10d",a);
	if(f>0) printf("%+10.2f",f);
	else if(f==0) printf("%10.2f",f);
	else if(f<0) printf("%10.2f",f);
	if(b>0) printf("%+10d\n",b);
	else if(b==0) printf("%10d\n",b);
	else if(b<0) printf("%10d\n",b);
	printf("012345678901234567890123456789");
}
>>>>>>> 0dc49b03aeac0da07095e293e4ada2aac92a311c
