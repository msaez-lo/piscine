/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 03:55:14 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/26 22:57:29 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 4;
	ft_ultimate_div_mod(&a,&b);
	printf("%d",a);
	printf("%d",b);
}
*/
