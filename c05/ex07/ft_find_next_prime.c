/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:45:46 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/09/01 16:20:25 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	a;

	a = nb;
	if (nb < 0)
		return (2);
	while (!(ft_is_prime(a)))
		a++;
	return (a);
}
/*
int main()
{
	printf("%d\n",ft_find_next_prime(0));
	printf("%d\n",ft_find_next_prime(-2147483648));
	printf("%d",ft_find_next_prime(2147483630));
}
*/
