/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 02:47:02 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/29 22:23:11 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	a;
	unsigned int	c;

	a = 0;
	while (to_find[a])
		a++;
	if (a == 0)
		return (str);
	c = 0;
	while (str[0] != '\0')
	{
		if (!(str[0] == to_find[c] || to_find[0] == '\0'))
			c = 0;
		else
			c++;
		if (c == a)
			break ;
		str++;
	}
	if (c == 0)
		return (0);
	else
		return (str - c + 1);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "Ey, buenos dias ,que tal?";
	char to_find[] = "Ey";
	printf("%s\n",strstr(str, to_find));
	char st[] = "hello world";
	char to_fin[] = "aaaa";
	printf("%s",ft_strstr(st,to_fin));
}
*/
