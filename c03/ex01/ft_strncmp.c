/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:56:26 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/28 23:51:08 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s2[i] == s1[i] && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char s1[] = "hola";
    char s2[] = "holaaa";
    printf("%d\n",strncmp(s1,s2,8));
    char d1[] = "hola";
    char d2[] = "holaaa";
    printf("%d",ft_strncmp(d1,d2,8));
}
*/
