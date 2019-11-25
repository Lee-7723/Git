#include<stdio.h>
int main()
{
	int grp,grp_[5],i,ii;
	char ch[5][10];
	scanf("%d", &grp);
	for (i = 0; i < grp; i++) scanf("%s", &ch[i]);
	for (i = 0; i < grp; i++) scanf("%d", &grp_[i]);
	for (i = 0; i < grp-1; i++)
	{
		for (ii = 0; ii < grp; ii++) if (grp_[ii] == i) printf("%s ", ch[ii]);
	}
	for (i = 0; i < grp; i++) if(grp_[i]==grp-1)printf("%s\n", ch[i]);
}