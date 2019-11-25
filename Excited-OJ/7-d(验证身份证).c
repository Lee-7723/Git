#include<stdio.h>
int main()
{
	char tst[100][18], a[100];
	int grp,rst[100];
	scanf("%d", &grp);
	for (int i = 0; i < grp; i++) scanf("%s", &tst[i]);
	for (int i = 0; i < grp; i++) rst[i]=7 * (tst[i][0] - '0') + 9 *( tst[i][1] - '0') + 10 * (tst[i][2] - '0') + 5 * (tst[i][3] - '0') + 8 * (tst[i][4] - '0') + 4 * (tst[i][5] - '0') + 2 * (tst[i][6] - '0') + 1 * (tst[i][7] - '0') + 6 * (tst[i][8] - '0') + 3 * (tst[i][9] - '0') + 7 * (tst[i][10] - '0') + 9 * (tst[i][11] - '0') + 10 * (tst[i][12] - '0') + 5 * (tst[i][13] - '0') + 8 * (tst[i][14] - '0') + 4 * (tst[i][15] - '0') + 2 * (tst[i][16]-'0');
	//for (int i = 0; i < grp; i++) printf("%d\n", rst[i]);²âÊÔÊý¾Ý
	for (int i = 0; i < grp; i++)
	{
		if (rst[i] % 11 == 0) a[i] = '1';
		else if (rst[i] % 11 == 1)a[i] = '0';
		else if (rst[i] % 11 == 2)a[i] = 'X';
		else if (rst[i] % 11 == 3)a[i] ='9' ;
		else if (rst[i] % 11 == 4)a[i] = '8';
		else if (rst[i] % 11 == 5)a[i] = '7';
		else if (rst[i] % 11 == 6)a[i] = '6';
		else if (rst[i] % 11 == 7)a[i] = '5';
		else if (rst[i] % 11 == 8)a[i] = '4';
		else if (rst[i] % 11 == 9)a[i] = '3';
		else if (rst[i] % 11 == 10)a[i] = '2';
	}
	for (int i = 0; i < grp; i++)
	{
		if (a[i] == tst[i][17]) printf("right\n");
		else printf("wrong\n");
	}
}