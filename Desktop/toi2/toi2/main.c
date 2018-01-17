#include<stdio.h>
#include<string.h>
int main(void)
{
	char c[20];

	printf("文字列:");
	scanf("%s", c);

	printf("配列cは、%s\n", c);
	printf("文字列の長さは、%d\n", strlen(c));
	do
	{
		printf("文字列:");
		scanf("%s", c);
	} while (strlen(c) > 6);

	printf("配列cは、%s\n", c);

	return 0;
}