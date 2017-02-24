#include <stdio.h>

int		ft_is_prime(int index);

void	test(int num, int expect)
{
	int result = ft_is_prime(num);
	printf("testing %d (expect %d): %d\n", num, expect, result);
	if (result != expect)
		printf("ERROR\n");
}

int		main(void)
{
	test(0, 0);
	test(1, 0);
	test(2, 1);
	test(3, 1);
	test(4, 0);
	test(5, 1);
	test(6, 0);
	test(7, 1);
	test(89989, 1);
	test(2146654199, 0);
	test(2146654201, 1);
	test(2147483647, 1);
	return (0);
}
