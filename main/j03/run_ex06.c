#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a;
	int b;
	int *ap;
	int *bp;

	a = 3;
	b = 7;
	ap = &a;
	bp = &b;
	printf("a: %d\nb: %d\n", a, b);
	ft_swap(ap, bp);
	printf("a: %d\nb: %d\n", a, b);
	return (0);
}
