/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:55:53 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/27 22:05:00 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i])
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)
			|| (str[i] > 47 && str [i] < 58))
		{
			if (cont == 0 && str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
			if (cont != 0 && str[i] > 64 && str[i] < 91)
				str[i] = str[i] + 32;
			cont++;
		}
		else
			cont = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(str));
}
*/
