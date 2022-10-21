/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:41:54 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/09/29 23:49:05 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	character;

	if (nb == -2147483648)
	{
		nb = - (nb % 1000000000);
		write(1, "-", 1);
		write(1, "2", 1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}	
	else
	{
		character = (nb) + '0';
		write(1, &character, 1);
	}
}

int main()
{
	ft_putnbr(100000);
}

