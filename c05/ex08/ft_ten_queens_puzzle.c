/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:17:52 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/09/01 16:20:47 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char str[11])
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
	write(1, "\n", 1);
}

int	condition(char str[11], int index)
{
	int	p;

	p = 0;
	if (index == 0)
		return (1);
	while (p < index)
	{
		if ((str[index] == str[p])
			|| (str[index] - '0' - index == str[p] - '0' - p)
			|| (str[index] - '0' + index == str[p] - '0' + p))
			return (0);
		p++;
	}
	return (1);
}

void	condition2(char str[11], int index, int *a)
{
	int	i;

	i = 0;
	while (i != 10 && index < 10)
	{
		str[index] = i + '0';
		if (condition(str, index))
		{
			if (index == 9)
			{
				ft_putstr(str);
				*a = *a + 1;
			}
			else
				condition2(str, index + 1, a);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	str[11];
	int		index;
	int		a;
	int		d;

	d = 0;
	a = 0;
	index = 0;
	while (d < 10)
	{
		str[d] = '0';
		d++;
	}
	str[d] = '\0';
	condition2(str, index, &a);
	return (a);
}
/*
int	main()
{
	printf("%d",ft_ten_queens_puzzle());
}
*/
