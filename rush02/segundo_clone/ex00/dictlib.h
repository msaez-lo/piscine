/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:47:46 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/28 18:15:33 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTLIB_H
# define DICTLIB_H
# define DICT_PATH "./numbers.dict"

typedef struct s_file
{
	char	*data;
	int		size;
}			t_file;

typedef struct s_dict
{
	char	*key;
	char	*value;
}			t_dict;
#endif
