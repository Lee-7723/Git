#include<stdio.h>
int main()
{
	int grp, b[5], a[999], i, ii = 0, n[2] = { 0,0 }, th[5] = {1,1,1,1,1}, nn;
	scanf("%d", &grp);
	for (i = 0; i < grp; i++)//group
	{
		scanf("%d", &b[i]);
		for (ii = 0;; ii++)//input every group
		{
			scanf("%d", &a[ii]);
			n[i]++;
			if (b[i] < a[ii]) th[i]++;
			else th[i] = th[i];
			if (getchar() == '\n') break;
		}
	}
	for (i = 0; i < grp; i++) printf("%d\n", th[i]);
}