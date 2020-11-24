#include <stdio.h>

int main()
{
	float fahr, cels = 0;
	while (cels <= 300) {
		printf("%3.0f\t%3.1f\n", cels, 9.0/5 * cels + 32);
		cels += 20;
	}
}