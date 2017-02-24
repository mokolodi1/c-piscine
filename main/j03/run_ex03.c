#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;
	int *ap;
	int *bp;

	a = 5;
	b = 3;
	ap = &a;
	bp = &b;
	printf("a before: %d\nb before:%d\n", a, b);
	ft_ultimate_div_mod(ap, bp);
	printf("a after: %d\nb after:%d\n", a, b);
	return (0);
}
