#include<unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *string)
{
	int i;

	if (!(*string))
		return;

	i = -1;
	while (string[++i] != '\0')
		ft_putchar(string[i]);
	ft_putchar('\n');
}
int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_putstr(av[1]);

	return (0);
}
