#include "../ft_putchar.c"

void ft_is_negative(int a);

int main(void)
{
	ft_is_negative(0);
	ft_is_negative(-0);
	ft_is_negative(-2);
	ft_is_negative(1000);
	return(0);
}