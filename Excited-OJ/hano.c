#include <stdio.h>
int count;
void hanoi(int n, char a, char b, char c);
int main(void)
{
	int n;
	char a = 'A', b = 'B', c = 'C';
	printf("请输入汉诺塔层数\n");
	scanf("%d", &n);
	hanoi(n, a, b, c);
	return 0;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("第%d次移动：%c->%c\n", ++count, a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		printf("第%d次移动：%c->%c\n", ++count, a, c);
		hanoi(n - 1, b, a, c);
	}
	return 0;
}