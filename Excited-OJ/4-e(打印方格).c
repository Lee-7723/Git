#include<stdio.h>
int main()
{
	int i,grp, a[10], b[10] ,A=0,B=0,c;
	scanf("%d", &grp);
	for(i=0;i<grp;i++) scanf("%d %d", &a[i], &b[i]);
	for (i = 0; i < grp; i++)
	{
		for (A=0;A<a[i];A++)
		{
			for (c = 0; c < 3 * b[i] + 1; c++)printf("-");
			printf("\n");
			for (B = 0; B < b[i]; B++) printf("|  ");
			printf("|\n");
			for (B = 0; B < b[i]; B++) printf("|  ");
			printf("|\n");
		}
		for (c = 0; c < 3 * b[i] + 1; c++)printf("-");
		printf("\n");
	}
}