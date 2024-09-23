
int ft_putchar(int c);

void	ft_putstr(char *str)
{
    int	i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i++]);
    }
}

int main(void)
{
    ft_putstr("salut ca va ? oui bien");
    return 0;
}
