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
	int		i;
	int		start_i;
	int		num_length;
	int		is_zero;
	char	*ret;

	i = 0;
	is_zero = str[i] == '0';
	while (str[i] == '0')
		i++;
	if (is_zero && !(str[i] >= '1' && str[i] <= '9'))
	{
		ret = malloc(sizeof(char) * 2);
		ret[0] = '0';
		ret[1] = 0;
		return (ret);
	}
	start_i = i;
	num_length = atoa_length(str + i);
	ret = malloc(sizeof(char) *  (num_length + 1));
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret[i - start_i] = str[i];
		i++;
	}
	return (ret);
}

int trim_count(char *str, int str_size)
{
	int word;
	int word_count;
	int n_words;

	n_words = 0;
	word = 0;
	word_count = 0;
	i = 0;
	while (i < str_size)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (-1);
		if (word)
		{
			word = (str[i] != ' ');
		}
		else
		{
			word = (str[i] != ' ');

		}
	}
}

int	ft_strtrim(char *str, int str_size)
{
}
