/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:41:32 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/09/19 21:32:11 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	c;
	unsigned int	r;

	len_dest = 0;
	r = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[r])
		r++;
	c = len_dest;
	if (size != 0)
	{
		while (src[c - len_dest] && c < size - 1)
		{
			dest[c] = src[c - len_dest];
			c++;
		}
	}
	dest[c] = '\0';
	if (r + size > len_dest + r)
		return (len_dest + r);
	else
		return (r + size);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	char dest[150] = "hola";
	char src[150] = "buenos dias";
	printf("%lu %s\n",strlcat(dest,src,15), dest);
	char des[150] = "hola";
	char sr[150] = "buenos dias";
	printf("%d %s",ft_strlcat(des,sr,15),des);
}
*/
