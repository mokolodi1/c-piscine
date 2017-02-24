#include <stdio.h>

int		ft_recursive_factorial(int nb);

void	test(int t)
{
	printf("testing %d: %d\n", t, ft_recursive_factorial(t));
}

int		main(void)
{
	test(-2147483648);
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(5);
	test(12);
	test(13);
	test(2147483647);
	return (0);
}
