/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogruszow <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:09:38 by ogruszow          #+#    #+#             */
/*   Updated: 2021/07/12 19:48:03 by ogruszow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c < 123)
	{
		write(1, &c, 1);
		c++;
	}
}	

int	main(void)
{
	ft_print_alphabet();
}
