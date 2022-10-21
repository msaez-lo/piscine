/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:43:22 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/29 13:54:30 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	i;

	i = 0;
	a = 0;
	while (dest[a])
		a++;
	while (src[i] && i < nb)
	{
		dest[i + a] = src[i];
		i++;
	}
	dest[i + a] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[100] = "Hola";
	char src[100] = "a";
	ft_strncat(dest, src, 10);
	printf("%s", dest);
	char des[100] = "Hola";
	char sr[100] = "a";
	strncat(des, sr, 10);
	printf("%s",des);
}
*/
