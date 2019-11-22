#include<stdio.h>
#include<stdlib.h>
main()
{
	char n[201];
	int i, a;
	scanf("%s", n);
	for (i = 0, a = 0; i < 200; i++)
	{
		if (n[i] == '\n')break;
		if (n[i] <= 122 && n[i] >= 97)n[i] = n[i] - 32;
		if (n[i] == 'A' || n[i] == 'E' || n[i] == 'I' || n[i] == 'O' || n[i] == 'U') a = a + 1;
	}
	printf("%s\n%d\n", n, a);
	system("pause");
}