#include<stdio.h>
int main()
{
	int grp,grp_[5],i,ii;//grp为组数，grp_[]用于标记每一行的数字是几
	char ch[5][10];
	scanf("%d", &grp);
	for (i = 0; i < grp; i++) scanf("%s", &ch[i]);//输入字符串
	for (i = 0; i < grp; i++) scanf("%d", &grp_[i]);//输入最后一行的标记数，第i行的标记为几
	for (i = 0; i < grp-1; i++)//输出第i个字符串
	{
		for (ii = 0; ii < grp; ii++) if (grp_[ii] == i) printf("%s ", ch[ii]);//搜索标记为i的那行，输出该行
	}
	for (i = 0; i < grp; i++) if(grp_[i]==grp-1)printf("%s\n", ch[i]);//输出最后一行的字符串
}
