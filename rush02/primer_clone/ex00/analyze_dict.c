/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:33:59 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/28 13:20:33 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictlib.h"
#include "strlib.h"
#include <stdio.h>
#include <unistd.h>

t_file	*get_file(char *file_name);

int	line_length(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\n' && str[count] != 0)
		count++;
	return count;
}

int	analyze_line(char *str)
{

	while (str[i] != ':')
	{
		if (str[i] == '\n')
			return (-1);
		i++;
	}
	while (str[i] >= 32 && str[i] <= 126)
	{
		if (str[i] != ' ')
			value_len++;
		i++;
	}
	if (str[i] != '\n')
		return (-1);
	return (1);
}

int	analyze_dict(char *file_name)
{
	int		i;
	int		line_size;
	int		n_lines;
	t_file	*file;

	i = 0;
	n_lines = 0;
	file = get_file(file_name);
	while (i < file->size)
	{
		if ((file->data)[i] == '\n')
			i++;
		else
		{
			line_size = line_length((file->data) + i);
			if (analyze_line((file->data) + i) < 0)
				return (-1);
			else
				write(1, (file->data) + i, line_size + 1);
			n_lines++;
			i += line_size;
		}
	}
	n_lines--;
	return (n_lines);
}
