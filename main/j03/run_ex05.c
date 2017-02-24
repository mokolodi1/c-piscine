#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char *string1;
	char *string2;
	char *string3;

	string1 = "Hello World!";
	string2 = "This is a test.";
	string3 = "";
	printf("length of \"%s\": %d\n", string1, ft_strlen(string1));
	printf("length of \"%s\": %d\n", string2, ft_strlen(string2));
	printf("length of \"%s\": %d\n", string3, ft_strlen(string3));
	return (0);
}
