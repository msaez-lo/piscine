/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:57:29 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/28 00:39:11 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <string.h>
//	#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char	*src = "sidbfds";
	char	*dest = "jsadf";
	ft_strcpy(dest, src);
	printf("%s",dest);
}
*/
