/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 01:03:04 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/28 23:15:27 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while ((src[i] != '\0' && (i < size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[40] = "hola buenos dias, ¿que tal?";
	char src[100]="eyijj99ddddddddddddddddddddddd9j";
	printf("%lu",strlcpy(dest,src,100));
	printf("%s\n",dest);
	char des[40] = "hola buenos dias, ¿que tal?";
    char sr[10]="eyijj999j";
	printf("%d",ft_strlcpy(des,sr,15));
	printf("%s\n",dest);
	
}
*/
