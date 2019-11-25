#include<stdio.h>
int main()
{
	int grp, num[100],i,th[50],ii,sum=0;
	scanf("%d", &grp);//input how many grp
	for (i = 0; i < grp; i++) scanf("%d", &num[i]);//how many people in each group
	for (ii = 0; ii < grp; ii++)
	{
		for (i = ii+1; i < grp; i++)
		{
			if (num[i] < num[ii])
			{
				int temp;
				temp = num[i];
				num[i] = num[ii];
				num[ii] = temp;
			}
			else num[ii] = num[ii];
		}
	}
	for (i = 0; i < (grp+1)/2; i++)
	{
		sum=sum+(num[i] +1)/ 2;
	}
	printf("%d", sum);
}