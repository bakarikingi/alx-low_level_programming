#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int a;
	unsigned long int beff = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int beff1;
	unsigned long int beff2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", beff);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", aft);
		aft += beff;
		beff = aft - beff;
	}

	beff1 = (beff / l);
	beff2 = (beff % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + beff1;
		beff1 = aft1 - beff1;
		aft2 = aft2 + beff2;
		beff2 = aft2 - beff2;
	}
	printf("\n");
	return (0);
}
