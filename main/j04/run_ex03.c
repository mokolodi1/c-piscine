#include <stdio.h>

int		ft_recursive_power(int nb, int power);

void	test(int nb, int power, int expecting)
{
	int result = ft_recursive_power(nb, power);
	printf("testing %d, %d (expecting %d): ", nb, power, expecting);
	printf("%d\n", result);
	if (expecting != result)
		printf("ERROR\n");
}

int		main(void)
{
	// negative power
	test(-9, -1, 0);
	test(-8, -1, 0);
	test(-1, -1, 0);
	test(0, -1, 0);
	test(1, -1, 0);
	test(8, -1, 0);
	test(9, -1, 0);

	// 0 power
	test(-42, 0, -1);
	test(-41, 0, -1);
	test(-1, 0, -1);
	test(0, 0, 0);
	test(1, 0, 1);
	test(41, 0, 1);
	test(42, 0, 1);

	// 1 power
	test(-42, 1, -42);
	test(-41, 1, -41);
	test(-1, 1, -1);
	test(0, 1, 0);
	test(1, 1, 1);
	test(41, 1, 41);
	test(42, 1, 42);

	// positive power (2)
	test(-42, 2, 1764);
	test(-41, 2, 1681);
	test(-1, 2, 1);
	test(0, 2, 0);
	test(1, 2, 1);
	test(41, 2, 1681);
	test(42, 2, 1764);

	// positive power (3)
	test(-42, 3, -74088);
	test(-41, 3, -68921);
	test(-1, 3, -1);
	test(0, 3, 0);
	test(1, 3, 1);
	test(41, 3, 68921);
	test(42, 3, 74088);
	
	return (0);
}
