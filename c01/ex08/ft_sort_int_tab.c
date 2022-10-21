/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:35:11 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/26 23:05:07 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	d;

	i = 0;
	while (i != size)
	{
		d = i;
		while (d != 0)
		{
			if (tab[d] < tab[d - 1])
			{
				c = tab[d];
				tab[d] = tab[d - 1];
				tab[d - 1] = c;
			}
			d--;
		}
		i++;
	}
}
/*
int main()
{
	int tab[4];
	int size = 4;
	tab[0]=497;
	tab[1]=-10;
	tab[2]=-80;
	tab[3]=10;
	ft_sort_int_tab(tab, size);
	printf("%d",tab[0]);
	printf("%d",tab[1]);
	printf("%d",tab[2]);
	printf("%d",tab[3]);
}
*/
