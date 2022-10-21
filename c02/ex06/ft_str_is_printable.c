/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:57:25 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/27 21:48:38 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			a++;
		i++;
	}
	if ((a == 0) || (str[0] == '\0'))
		return (1);
	else
		return (0);
}
