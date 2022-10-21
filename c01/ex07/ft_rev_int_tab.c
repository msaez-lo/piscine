/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:33:16 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/26 23:09:26 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = size;
	while (i != (size / 2))
	{
		c = tab[i - 1];
		tab[i - 1] = tab[-i + size];
		tab[-i + size] = c;
		i--;
	}
}

/*

int main()
{
	int tab[4];
	int size = 4;
	tab[0]=1;
	tab[1]=2;
	tab[2]=3;
	tab[3]=4;
	ft_rev_int_tab(tab, size);
	printf("%d",tab[0]);
	printf("%d",tab[1]);
	printf("%d",tab[2]);
	printf("%d",tab[3]);
}
*/
