#include <stdio.h>
#include <libc.h>

char	*ft_strstr(char *str, char *to_find);

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

void	test(char *str, char *to_find)
{
	printf("\npassed (\"%s\", \"%s\")\n", str, to_find);
	char *actual = strstr(str, to_find);
	char *mine = ft_strstr(str, to_find);

	printf("actual: %s\n", actual);
	printf("mine  : %s\n", mine);
}

void	test_null(char *str, char *to_find)
{
	printf("\npassed (\"%s\", \"%s\")\n", str, to_find);
	char *actual = strstr(str, to_find);
	char *mine = ft_strstr(str, to_find);

	printf("actual: %p\n", actual);
	printf("mine  : %p\n", mine);
	if (actual != mine)
		printf("ERROR, pointers not the same\n");
}
	
int		main(void)
{
	char str[] = "Hello world! This is a test string that I wrote just for me.";
	char to_find1[] = "Hello";
	test(str, to_find1);

	char to_find2[] = "world!";
	test(str, to_find2);

	char to_find25[] = "me.";
	test(str, to_find25);

	char to_find3[] = "just for me.?";
	test(str, to_find3);

	char to_find4[] = "";
	test(str, to_find4);

	char to_find6[] = "o";
	test(str, to_find6);

	printf("\ngoing to print pointers to check for null\n");
	char blank_str[] = "";
	char to_find5[] = "Hello??";
	test_null(blank_str, to_find5);
	return (0);
}
