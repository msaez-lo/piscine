/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:47:23 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/28 10:41:28 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictlib.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	file_size(char *file_name)
{
	int		fd;
	int		size;
	char	c;

	size = 0;
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Error, file not found\n", 22);
		return (-1);
	}
	while (read(fd, &c, 1) != 0)
		size++;
	close(fd);
	return (size);
}

t_file	*get_file(char *file_name)
{
	int		size;
	int		fd;
	char	*buffer;
	t_file	*file;

	file = malloc(sizeof(t_file));
	size = file_size(file_name);
	if (file_size < 0)
		return (0);
	buffer = malloc(sizeof(char) * size);
	fd = open(file_name, O_RDONLY);
	read(fd, buffer, size);
	close(fd);
	file->data = buffer;
	file->size = size;
	return (file);
}
