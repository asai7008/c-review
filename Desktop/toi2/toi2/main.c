#include<stdio.h>
#include<string.h>
int main(void)
{
	char c[20];

	printf("������:");
	scanf("%s", c);

	printf("�z��c�́A%s\n", c);
	printf("������̒����́A%d\n", strlen(c));
	do
	{
		printf("������:");
		scanf("%s", c);
	} while (strlen(c) > 6);

	printf("�z��c�́A%s\n", c);

	return 0;
}