/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 03:01:44 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/26 22:50:23 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_swap(int *a, int *b)
{	
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	ft_swap(&a, &b);
	printf("%d",a);
	printf("%d",b);

}
*/
