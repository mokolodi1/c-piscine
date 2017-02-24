#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

void	test(char *s1, char *s2)
{
	printf("input: \"%s\", \"%s\"\n", s1, s2);
	int actual = strcmp(s1, s2);
	int mine = ft_strcmp(s1, s2);

	printf("actual: %d\n", actual);
	printf("mine  : %d\n", mine);
	if (actual != mine && ((actual < 0 && mine >= 0) || (mine < 0 && actual > 0)))
		printf("ERROR: actual not same sign\n");
	printf("\n");
}

int		main(void)
{
	char hello[] = "Hello";
	char hello2[] = "Hello";
	char hello3[] = "Hekmo";
	char hello_small[] = "hello";
	char hel[] = "Hell";
	char bye[] = "Bye";
	char empty[] = "";
	
	test(hello, hello2);
	test(hello, hello_small);
	test(hello_small, hello);
	test(hello, hel);
	test(hel, hello);
	test(hel, bye);
	test(hello, hello3);
	test(hello3, hello);
	test(hello, empty);
	test(empty, hello);
	return (0);
}
