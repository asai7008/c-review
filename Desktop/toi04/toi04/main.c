#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "HELP";
	char b[5];
	char *pa, *pb;

	for (pa = a, pb = b + 4; pa < a + 5; pa++, pb--){
		*pb = *pa;
	}

	for (pb = b; pb < b + 5; pb++){
		printf("%c\n", *pb);
	}

	return 0;

}