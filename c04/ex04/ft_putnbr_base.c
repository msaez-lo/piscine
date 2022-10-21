/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:03:18 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/30 20:40:54 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_errors(char *base)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				c++;
			j++;
		}
		if (base[i] == 43 || base[i] == 45)
			c++;
		i++;
	}
	if (i < 2 || c != 0)
		return (0);
	else
		return (1);
}

int	expp(int a, int b)
{
	int	n;
	int	r;

	n = 1;
	r = a;
	if (b == 0)
		r = 1;
	while ((n != b) && (b != 0))
	{
		r = r * a;
		n++;
	}
	return (r);
}

int	max_n(int i, int nbr)
{
	int	n;

	n = 0;
	if (nbr != 0)
	{
		while (expp(i, n) <= nbr)
			n++;
		n--;
	}
	return (n);
}

int	check_is_negative(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -1 * nbr;
	}
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	n;
	int	wr;

	nbr = check_is_negative(nbr);
	i = 0;
	wr = 0;
	if (check_errors(base))
	{
		while (base[i])
			i++;
		n = max_n(i, nbr);
		while (n != -1)
		{
			wr = i;
			while (wr * expp(i, n) > nbr)
				wr--;
			write(1, &base[wr], 1);
			nbr = nbr - wr * expp(i, n);
			n--;
		}
	}
}

int main()
{
	ft_putnbr_base(-1000000, "poniguay");
}

