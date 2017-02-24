#include <stdio.h>

void	sastantua(int a);

int		main(void)
{
	sastantua(-1);
	sastantua(0);
	printf("shouldn't be anything above this\n");
	sastantua(1);
	sastantua(2);
	sastantua(3);
	sastantua(4);
	sastantua(5);
	sastantua(6);
	sastantua(7);
	sastantua(8);
	return (0);
}
