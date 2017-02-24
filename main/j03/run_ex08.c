#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

void	test(char *a)
{
	printf("%s: atoi=%d; program=%d\n", a, atoi(a), ft_atoi(a));
}

int		main(void)
{
	char a[] = "123456";
	char b[] = "-654321";
	char c[] = "0";
	char d[] = "---042";
	char e[] = "t";

	test(a);
	test(b);
	test(c);
	test(d);
	test(e);
	return (0);
}
