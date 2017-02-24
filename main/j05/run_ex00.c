#include <stdio.h>
#include <libc.h>

char	*ft_strcpy(char *dest, char *str);

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void ft_putchar(char a)
{
	write(1, &a, 1);
	return;
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	test(char *test_string)
{
	char actual[ft_strlen(test_string)];
	char mine[ft_strlen(test_string)];
	printf("ft_strlen(test_string): %d\n", ft_strlen(test_string));

	char *actual_ret = strcpy(actual, test_string);
	char *mine_ret = ft_strcpy(mine, test_string);

	printf("actual: %s\n", actual);
	printf("mine  : %s\n", mine);
	printf("actual_ret: %s\n", actual_ret);
	printf("mine_ret  : %s\n", mine_ret);
}

int		main(void)
{
	test("Hello");
	test("This is 42");
	return (0);
}
