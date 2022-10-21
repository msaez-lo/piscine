/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragreda- <ragreda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:10:41 by ragreda-          #+#    #+#             */
/*   Updated: 2022/08/30 13:22:50 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictlib.h"

int	analyze_dict(char *file_name);

int	main(int argc, char **argv)
{
	if (argc == 2)
		analyze_dict(DICT_PATH);
	else if (argc == 3)
		analyze_dict(argv[1]);
	else
		return (-1);
	return (0);
}
