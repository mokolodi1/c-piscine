#include <stdio.h>

int		ft_sqrt(int index);

void	test(int num, int expect)
{
	int result = ft_sqrt(num);
	printf("testing %d (expect %d): %d\n", num, expect, result);
	if (result != expect)
		printf("ERROR\n");
}

int		main(void)
{
	test(-1, 0);
	test(0, 0);
	test(1, 1);
	test(2, 0);
	test(3, 0);
	test(4, 2);
	test(9, 3);
	test(10, 0);
	test(25, 5);
	test(2147395600, 46340);
	return (0);
}
