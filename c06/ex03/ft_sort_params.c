/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:26:01 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/09/01 20:15:32 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s2[i] == s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr_specific(int arguc, char **str)
{
	int	i;
	int	b;

	i = 1;
	b = 0;
	while (i != arguc)
	{
		b = 0;
		while (str[i][b])
		{
			write(1, &str[i][b], 1);
			b++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*tab;

	a = 1;
	while (a != argc)
	{
		b = a;
		while (b != 1)
		{
			if (ft_strcmp(argv[b], argv[b - 1]) < 0)
			{
				tab = argv[b];
				argv[b] = argv[b - 1];
				argv[b - 1] = tab;
			}
			b--;
		}
		a++;
	}
	ft_putstr_specific(argc, argv);
	return (0);
}
