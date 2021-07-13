/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogruszow <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:03:55 by ogruszow          #+#    #+#             */
/*   Updated: 2021/07/12 20:20:23 by ogruszow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_numbers(void)
{
	int	c;

	c = 48;
	while (c < 58)
	{
		write (1, &c, 1);
		c++;
	}
}
int		main(void)
{
	ft_print_numbers();
}
