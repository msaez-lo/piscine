/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:10:11 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/08/29 00:40:33 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	a;
	unsigned int	i;

	i = 0;
	a = 0;
	while (dest[a])
		a++;
	while (src[i])
	{
		dest[i + a] = src[i];
		i++;
	}
	dest[i + a] = '\0';
	return (dest);
}
/*
int main()
{	
	char dest[] = "Hola";
	char src[] = "j";
	ft_strcat(dest,src);
	printf("%s",dest);
}
*/
