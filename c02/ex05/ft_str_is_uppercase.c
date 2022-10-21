/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:55:26 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/27 21:48:44 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
			a++;
		i++;
	}
	if ((a == 0) || (str[0] == '\0'))
		return (1);
	else
		return (0);
}