#include<stdio.h>
int main()
{
	char tst[10][50];//用于测试的字符
	int grp,cnt[10] = { 0 }, ii = 0,a=1;//grp组数，cnt每行字符个数
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++)
	{
		scanf("%s", &tst[i]);
		while (tst[i][cnt[i]] != '\0')
		{
			cnt[i]++;//用于计算每一行有多少个字符
		}
		ii = 0;
	}
	for (int i = 0; i < grp; i++)
	{
		if (cnt[i] > 31) printf("no");//判断字符个数是否超过31
		else if (tst[i][0] == '_' || (tst[i][0]>='A'&& tst[i][0] <= 'Z')|| (tst[i][0] >= 'a' && tst[i][0] <= 'z'))//判断第一个字符是否是下划线或字母
		{
			for (int ii = 1; ii < cnt[i]; ii++)
			{
				if (tst[i][ii] == '_' || (tst[i][ii] >= '0' && tst[i][ii] <= '9') || (tst[i][ii] >= 'A' && tst[i][ii] <= 'Z') || (tst[i][ii] >= 'a' && tst[i][ii] <= 'z'))a++;//判断其他字符，a用来数合法字符的个数
				else break;
			}
			if (a == cnt[i])printf("yes\n");//如果合法字符个数和全部字符个数一样多就合法
			else printf("no\n");
			a = 1;
		}
		else
		{
			printf("no\n");
		}
	}
}