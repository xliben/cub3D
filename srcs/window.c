/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <babkar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:40:54 by babkar            #+#    #+#             */
/*   Updated: 2022/12/29 17:41:18 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_window(t_mlx *mlx)
{
	mlx->mlx = mlx_init();
	mlx->win  = mlx_new_window(mlx->mlx, 1920,  1080, "cub3d");
}