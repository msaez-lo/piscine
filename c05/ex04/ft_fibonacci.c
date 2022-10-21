/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:38:40 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/31 06:19:13 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main()
{
	printf("%d\n",ft_fibonacci(0));
	printf("%d\n",ft_fibonacci(1));
    printf("%d\n",ft_fibonacci(2));
    printf("%d\n",ft_fibonacci(3));
    printf("%d\n",ft_fibonacci(4));
    printf("%d\n",ft_fibonacci(5));
    printf("%d\n",ft_fibonacci(6));
    printf("%d\n",ft_fibonacci(7));
    printf("%d\n",ft_fibonacci(8));
}
*/
