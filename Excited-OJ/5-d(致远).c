#include<stdio.h>
int main()
{
	int a[5], b[5];
	int n,i,x;
	int f = 0,k,o=1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 1;
		while (f != -1)
		{
			scanf("%d", &k);
			if (a[i] < k)
			{
				b[i]++;
			}
			f = k;
		}
		f = 0;
	}
	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d\n", b[i]);
	}
	return 0;
}