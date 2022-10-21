/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:09:44 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/28 14:21:06 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLIB_H
# define STRLIB_H

int	ft_str_is_numeric(char *str);
int	ft_str_is_printable(char *str);
int	ft_strlen(char *str);
#endif
c2r9s2% cat strlib.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:50:02 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/28 13:38:15 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NUMBER(x) (x >= '0' && x <= '9')
#define PRINTABLE(x) (x >= 32 && x <= 126)

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

int atoa_length(char *str)
{
	int	count;

	count = 0;
	while (str[count] >= '0' && str[count] <= '9')
		count++;
	return (count);
}

char *ft_atoa(char *str)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (str[0] == 0 && str[1])
	{
		while (str[j + 1])
			str[j] = str[j + 1];
		j++;
	}
	i++;
{
