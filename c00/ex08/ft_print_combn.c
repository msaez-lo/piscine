/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:44:55 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/30 20:43:11 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	count_digits(int n)
{
	int	a;

	a = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		a++;
	}
	return (a);
}

int	decreasing_digits(int c, int n)
{
	int	a;
	int	b;
	int	s;

	b = 10;
	a = n % 10;
	s = 0;
	while (a < b)
	{
		b = a;
		n = n / 10;
		a = n % 10;
		s++;
	}
	if ((n == 0) && (s >= c))
	{
		return (1);
	}
	else
		return (0);
}

void	ft_print_ndigits(int c, int n)
{
	char	character;

	if (count_digits(n) != c)
	{
		write(1, "0", 1);
	}
	if (n / 10 != 0)
	{
		ft_print_ndigits(count_digits(n / 10), n / 10);
		ft_print_ndigits(1, n % 10);
	}
	else
	{
		character = (n % 10) + '0';
		write(1, &character, 1);
	}
}

void	ft_print_combn(int n)
{
	int	c;

	c = 0;
	while ((c < (expp(10, n)) && (c != 123456790)))
	{
		if (decreasing_digits(n, c))
		{
			ft_print_ndigits(n, c);
			if ((c / expp(10, n - 1)) != (10 - n))
				write(1, ", ", 2);
		}
		c++;
	}
}

int main ()
{
	ft_print_combn(9);
}

