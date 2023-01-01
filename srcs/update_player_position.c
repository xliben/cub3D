/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_player_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <babkar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:58:44 by babkar            #+#    #+#             */
/*   Updated: 2023/01/01 12:34:13 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_map *update_player_position(t_map *map)
{
    if (map->rotation == -1)
    {
        map->player.rotation_speed = ((int)map->player.rotation_speed + 1) % 180;
        map->player.rotation_angle = map->player.rotation_speed * M_PI / 90;
    }   
    if (map->rotation == 1)
    {  
        map->player.rotation_speed = ((int)map->player.rotation_speed + 179) % 180;
        map->player.rotation_angle = map->player.rotation_speed * M_PI / 90;
    } 
    if (map->walk_ws)
    {
        map->player.x += cos(map->player.rotation_angle) * map->player.move_speed * map->walk_ws;
        map->player.y += sin(map->player.rotation_angle) * map->player.move_speed * map->walk_ws;
    }
    if (map->walk_ad == -1)
    {
        map->player.x -= sin(map->player.rotation_angle) * map->player.move_speed;
        map->player.y += cos(map->player.rotation_angle) * map->player.move_speed;
    }
    if (map->walk_ad == 1)
    {
        map->player.x += sin(map->player.rotation_angle) * map->player.move_speed;
        map->player.y -= cos(map->player.rotation_angle) * map->player.move_speed;
    }
    return (map);
}
