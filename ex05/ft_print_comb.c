#include <unistd.h>
void	ft_putchar (char c)
{
	write (1, &c, 1);
}
void	ft_numbers(int i1, int i2, int i3)
{
	ft_putchar('0' + i1);
	ft_putchar('0' + i2);
	ft_putchar('0' + i3);
}
void	ft_print_comb(void)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = 0;
	while (i1 <= 7)
	{
		i2 = i1 + 1;
		while (i2 <= 8)
		{
			i3 = i2 + 1;
			while (i3 <= 9)
			{
				ft_numbers(i1, i2, i3);
				if (i1 != 7)
				{
					write(1, ",", 2);
				}
				i3++;
				 }
			i2++;
		}
		 i1++;
	}
}
