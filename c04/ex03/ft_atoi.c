/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:03:40 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/30 00:17:41 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count_minus;
	int	integer;
	int	i;

	i = 0;
	integer = 0;
	count_minus = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count_minus++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		integer = integer * 10;
		integer = integer + (str[i] - '0');
		i++;
	}
	if (count_minus % 2 == 1)
		integer = -1 * integer;
	return (integer);
}
/*
int main()
{
	char ch[] = "     ---+--234s5124";
	printf("%d",ft_atoi(ch));
}
*/
