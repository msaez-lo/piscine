/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:33:59 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/28 19:13:26 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictlib.h"
#include "strlib.h"
#include "read_file.h"
#include <unistd.h>
#include <stdlib.h>

int	line_length(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\n' && str[count] != 0)
		count++;
	return (count);
}

int	show_error(t_file *file)
{
	write(1, "Dict Error\n", 11);
	if (file != 0)
	{
		free(file->data);
		free(file);
	}
	return (-1);
}

int	analyze_line(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\n')
		return (1);
	if (str[0] == ' ')
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
		return (-1);
	while (str[i] >= 32 && str[i] <= 126)
		i++;
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
	if (file == 0)
		return (show_error(file));
	while (i < file->size)
	{
		if ((file->data)[i] == '\n')
			i++;
		else
		{
			line_size = line_length((file->data) + i);
			if (analyze_line((file->data) + i) < 0)
				return (show_error(file));
			n_lines++;
			i += line_size;
		}
	}
	n_lines--;
	return (n_lines);
}
