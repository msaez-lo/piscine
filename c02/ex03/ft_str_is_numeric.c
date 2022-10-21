/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:40:52 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/27 21:39:57 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
			a++;
		i++;
	}
	if ((a == 0) || (str[0] == '\0'))
		return (1);
	else
		return (0);
}
/*
int main()
{
	char *s;
	s = "123456s";
	char *d;
	d = "ab";
	printf("%d",ft_str_is_numeric(s));
	printf("%d",ft_str_is_numeric(d));
}
*/
