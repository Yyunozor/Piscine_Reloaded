
int ft_putchar(int c);

void	ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

int main(void)
{
    ft_putstr("salut ca va ? oui bien");
    return 0;
}
