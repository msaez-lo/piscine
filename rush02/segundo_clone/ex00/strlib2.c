/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlib2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:02:41 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/28 19:11:11 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	atoa_length(char *str)
{
	int	count;

	count = 0;
	while (str[count] >= '0' && str[count] <= '9')
		count++;
	return (count);
}

char	*ft_atoa(char *str)
{
	int		i;
	int		start_i;
	int		num_length;
	char	*ret;

	i = 0;
	while (str[i] == '0')
		i++;
	if (!(str[i] >= '1' && str[i] <= '9'))
	{
		ret = malloc(sizeof(char) * 2);
		ret[0] = '0';
		ret[1] = 0;
		return (ret);
	}
	start_i = i;
	num_length = atoa_length(str + i);
	ret = malloc(sizeof(char) * (num_length + 1));
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret[i - start_i] = str[i];
		i++;
	}
	ret[i - start_i] = 0;
	return (ret);
}

char	*trim_count(char *str, int str_size)
{
	int		word;
	int		word_count;
	int		n_words;
	int		i;

	n_words = (str[0] != ' ');
	word = (str[0] != ' ');
	word_count = 0;
	i = 0;
	while (i < str_size)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		if (word)
			word_count++;
		else
		{
			if (str[i] != ' ')
				n_words++;
		}
		word = (str[i] != ' ');
		i++;
	}
	return (malloc(word_count + n_words));
}

char	*ft_strtrim(char *str, int str_size)
{
	char	*ret;
	int		word;
	int		i;
	int		r;

	word = str[0] != ' ';
	i = 0;
	r = 0;
	ret = trim_count(str, str_size);
	if (ret == 0)
		return (0);
	while (i < str_size)
	{
		if (word)
			ret[r++] = str[i];
		else if (str[i] != ' ')
			ret[r++] = str[i];
		word = str[i] != ' ';
		i++;
	}
	if (word)
		ret[r] = 0;
	else
		ret[r - 1] = 0;
	return (ret);
}
