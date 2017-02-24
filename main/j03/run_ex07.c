#include <stdio.h>

char *ft_strrev(char *str);

int main(void)
{
	char string1[] = "Hello World!";
	char string2[] = "This is a test.";
	char string3[] = "";

	printf("reversed: %s\n", ft_strrev(string1));
	printf("reversed: %s\n", ft_strrev(string2));
	printf("reversed (should be blank): %s\n", ft_strrev(string3));
	return (0);
}
