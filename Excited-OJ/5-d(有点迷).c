#include<stdio.h>
int main()
{
	int T, tst[5], a = 0, i, n[5] = { 0,0,0,0,0 },k=0;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d", &tst[i]);
		while (k != -1)
		{
			scanf("%d", &a);
			if (a>=tst[i]) n[i]++;
			k = a;
		}
		k = 0;
	}
	for (i = 0; i < T; i++) printf("%d\n", n[i]);
}