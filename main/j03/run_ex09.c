#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

void	put_int_array(int *a, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
}

void	test(int *a, int size)
{
	printf("before: ");
	put_int_array(a, size);
	printf("\n");
	ft_sort_integer_table(a, size);
	printf("after: ");
	put_int_array(a, size);
	printf("\n");
}

int		main(void)
{
	int numbers[] = {2, 5, 7, 8, 4, 6, 23, 5, 46, 456, 2, 6, 4, 36, 7, 5};
	test(numbers, 16);
	return (0);
}
