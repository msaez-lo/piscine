/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:47:46 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/28 11:21:51 by ragreda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTLIB_H
# define DICTLIB_H

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
