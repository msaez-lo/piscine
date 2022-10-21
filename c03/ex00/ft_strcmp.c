/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:32:10 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/28 23:45:25 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s2[i] == s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "j";
	char s2[] = "h";
	printf("%d\n",strcmp(s1,s2));
	char d1[] = "j";
	char d2[] = "h";
	printf("%d",ft_strcmp(d1,d2));	
}
*/
