#include <stdio.h>
#include <string.h>

int main(void)
{
	int train[10] = { 1, 2, 3, 4, 5 };
	int car[][3] = { 1, 2, 3, 4, 5, 6, 7 };
	char plane[] = "Boeing 787 Dreamliner";
	char ship[][3] = { 'Q', 'u', 'e', 'e', 'n' };

	printf("%d\n", train[5]);
	printf("%d\n", car[1][1]);
	printf("%d\n", strlen(plane));
	printf("%c\n", ship[1][1]);

	return 0;

}