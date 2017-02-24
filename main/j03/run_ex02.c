#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int d;
	int *dptr;
	int m;
	int *mptr;

	d = 5;
	m = 3;
	dptr = &d;
	mptr = &m;
	ft_div_mod(d, m, dptr, mptr);
	printf("d: %d; m: %d", d, m);
	return (0);
}
