#include <stdio.h>
int main(void)
{
	struct classNo {
		int nen;
		char kumi;
		int bangou;
	};

	struct classNo seito;

	seito.nen = 1;
	seito.kumi = 'A';
	seito.bangou = 1;

	printf("%d”N%c‘g%d”Ô\n", seito.nen, seito.kumi, seito.bangou);

	return 0;

}