/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:18:55 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/28 00:31:21 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i]) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "hola";
	char dest[] = "buenias";
	ft_strncpy(dest, src, 6);
	printf("%s\n%s\n",dest, src);
	char sr[] = "hola";
    char des[] = "buenias";
    strncpy(des, sr, 6);
    printf("%s\n%s",des, sr);
}	
*/
