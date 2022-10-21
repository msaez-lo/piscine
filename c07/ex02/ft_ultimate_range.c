/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:44:36 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/09/01 22:03:05 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ret;
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	ret = malloc(sizeof(int) * (i));
	if (ret == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (i);
}
