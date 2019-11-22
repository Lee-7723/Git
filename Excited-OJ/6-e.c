#include<stdio.h>
int main()
{
	int q, w, e, r;
	scanf("%d %d %d %d", &q, &w, &e, &r);
	if (q + w + e + r < 20) printf("%d", q + w + e + r + 10);
	else if (q + w + e + r >= 20 && q + w + e + r < 30) printf("%d", q + w + e + r + 8);
	else if (q + w + e + r >= 30 && q + w + e + r < 40) printf("%d", q + w + e + r + 5);
	else if (q + w + e + r >= 40) printf("%d", q + w + e + r);
}