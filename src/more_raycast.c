// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   more_raycast.c                                     :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: mobadiah <mobadiah@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/03/26 14:15:50 by rmehadje          #+#    #+#             */
// /*   Updated: 2024/04/29 16:29:15 by mobadiah         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "../include/cub3d.h"

// void	dirxl(t_array	*r, t_vec	*vec)
// {
// 	r->s[X] = -1;
// 	r->step_dis[X] = (vec[0].x - r->pos[X]) * r->dir_dis[X];
// 	r->h_side[X] = 3;
// }

// void	dirxr(t_array	*r, t_vec	*vec)
// {
// 	r->s[X] = 1;
// 	r->step_dis[X] = (r->pos[0] + 1.0 - vec[0].x) * r->dir_dis[X];
// 	r->h_side[X] = 2;
// }

// void	diryu(t_array	*r, t_vec	*vec)
// {
// 	r->s[Y] = -1;
// 	r->step_dis[Y] = (vec[0].y - r->pos[Y]) * r->dir_dis[Y];
// 	r->h_side[Y] = 0;
// }

// void	diryd(t_array	*r, t_vec	*vec)
// {
// 	r->s[Y] = 1;
// 	r->step_dis[Y] = (r->pos[1] + 1.0 - vec[0].y) * r->dir_dis[Y];
// 	r->h_side[Y] = 1;
// }
