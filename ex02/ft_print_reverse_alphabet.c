/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogruszow <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 08:31:34 by ogruszow          #+#    #+#             */
/*   Updated: 2021/07/12 20:02:05 by ogruszow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_reverse_alphabet(void)	
{
	int	c;

	c = 122;
	while (c > 97)
	{
		write(1, &c, 1);
		c = c - 1;
	}
}
int	main(void)
{
	ft_print_reverse_alphabet();
}
