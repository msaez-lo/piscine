/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:25:18 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/09/01 22:02:36 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;
	int	a;

	a = min;
	i = 0;
	ret = (int *)malloc(sizeof(int) * (max - min));
	if (ret == NULL)
		return (NULL);
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
/*
int main()
{
	int i;
	int *b;

	b = ft_range(5, 10);
	i = 0;
	while (i != max - min)
	{
		printf("%d", b[i]);
		i++;
	}
}
*/
