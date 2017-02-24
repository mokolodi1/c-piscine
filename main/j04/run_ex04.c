#include <stdio.h>

int		ft_fibonacci(int index);

void	test(int index, int expect)
{
	int result = ft_fibonacci(index);
	printf("testing %d (expect %d): %d\n", index, expect,  result);
	if (result != expect)
		printf("ERROR\n");
}

int		main(void)
{
	test(-5, -1);
	test(-1, -1);
	test(0, 0);
	test(1, 1);
	test(2, 1);
	test(3, 2);
	test(4, 3);
	test(5, 5);
	test(6, 8);
	test(40, 102334155);
	return (0);
}
