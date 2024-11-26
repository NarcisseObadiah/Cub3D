/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:13:18 by rmehadje          #+#    #+#             */
/*   Updated: 2024/04/30 14:55:27 by mobadiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

// int	main(int argc, char **argv)
// {
// 	t_general	g;
// 	t_map		map;

// 	(void)argv;
// 	if (argc == 1)
// 	{
// 		Gunit(&g, &map);
// 	}
// 	free(&g);
// 	free(&map);
// 	return (EXIT_SUCCESS);
// }

int main(int argc, char **argv)
{
	t_map game_data;
	ft_bzero(&game_data, sizeof(t_map));
	// ft_free(&game_data);
	if (argc != 2)
		ft_error("Wrong number of argument\n");
	parser((char *)argv[1], &game_data);
}
