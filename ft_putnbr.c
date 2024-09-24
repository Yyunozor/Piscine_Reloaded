#include <unistd.h>

int ft_putchar(int c);

int ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return 0;
    }
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
    }
	char c = nb % 10 + '0';
	write(1, &c, 1);
	return 0;
}


int main(void)
{
    ft_putnbr(12345);
    return 0;
}
