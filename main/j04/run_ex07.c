#include <stdio.h>

int		ft_find_next_prime(int index);

void	test(int num, int expect)
{
	int result = ft_find_next_prime(num);
	printf("testing %d (expect %d): %d\n", num, expect, result);
	if (result != expect)
		printf("ERROR\n");
}

int		main(void)
{
	test(0, 2);
	test(1, 2);
	test(2, 2);
	test(3, 3);
	test(4, 5);
	test(5, 5);
	test(6, 7);
	test(7, 7);
	test(89989, 89989);
	test(2146654199, 2146654201);
	test(2146654201, 2146654201);
	return (0);
}
