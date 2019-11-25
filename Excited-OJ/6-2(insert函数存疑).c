#include<stdio.h>
void th(int a[], int b)
{
	int i, ii;
	for (ii = 0; ii < 5; ii++)
	{
		for (i = ii + 1; i < 5; i++)
		{
			if (a[i] > a[ii])
			{
				int temp;
				temp = a[i];
				a[i] = a[ii];
				a[ii] = temp;
			}
			else a[i] = a[i];
		}
	}
}
void insert(int a[], int b, int tst)
{
	int c[6],i,ii;
	//for (i = 0; i < 5; i++) c[i] = a[i];
	//c[5] = tst;
	a[5] = tst;
	for (ii = 0; ii < 6; ii++)
	{
		for (i = ii + 1; i < 6; i++)
		{
			if (a[i] > a[ii])
			{
				int temp;
				temp = a[i];
				a[i] = a[ii];
				a[ii] = temp;
			}
		}
	}
	for (i = 0; i < 6; i++) c[i] = a[i];
}
int main()
{
	int num[100],i,tst,temp[6];
	for (i = 0; i < 100; i++) num[i] = 0;
	for(i=0;i<6;i++) scanf("%d", &temp[i]);
	for (i = 0; i < 5 ; i++) num[i] = temp[i];
	th(num, 100);
	insert(num, 100, temp[5]);
	for (i = 0; i < 6;i++)printf("%d ", num[i]);
}