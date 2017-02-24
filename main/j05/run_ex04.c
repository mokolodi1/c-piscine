#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

void	test(char *s1, char *s2, unsigned int n)
{
	printf("input: \"%s\", \"%s\", %d\n", s1, s2, n);
	int actual = strncmp(s1, s2, n);
	int mine = ft_strncmp(s1, s2, n);

	printf("actual: %d\n", actual);
	printf("mine  : %d\n", mine);
	if (actual != mine && ((actual < 0 && mine >= 0) || (mine < 0 && actual > 0)))
		printf("ERROR: actual not same sign\n");
	//printf("\n");
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
	
	test(hello, hello2, 5);
	test(hello, hello2, 10);
	test(hello, hello_small, 3);
	test(hello_small, hello, 20);
	test(hello, hel, 2);
	test(hello, hel, 3);
	test(hello, hel, 4);
	test(hel, hello, 3);
	test(hel, bye, 0);
	test(hel, bye, 1);
	test(hello, hello3, 5);
	test(hello3, hello, 5);
	test(hello, empty, 0);
	test(empty, hello, 5);
	return (0);
}
