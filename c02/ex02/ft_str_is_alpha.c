/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:41:38 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/27 21:35:20 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			a++;
		i++;
	}
	if ((a == 0) || (str[0] == '\0'))
		return (1);
	else
		return (0);
}
/*
int main()
{
	char	str[53] = "ASDFGHJKLZXCVBNMQWERTYUIOPasdfghjklqwertyuiopzxcvbnm";
	char	n[2] = "!";
	int a;
	a = ft_str_is_alpha(str);
	printf("%d",a);
	a = ft_str_is_alpha(n);
	printf("%d",a);
}
*/
