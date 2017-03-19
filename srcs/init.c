/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 02:28:55 by agouby            #+#    #+#             */
/*   Updated: 2017/03/16 18:33:58 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		init_coord(t_coord *co)
{
	co->x = 0;
	co->y = 0;
}

static void	init_fill_struct(t_fill *fill)
{
	fill->map = NULL;
	fill->piece = NULL;
	fill->oc = 0;
	fill->xc = 0;
	fill->d_tab = NULL;
	init_coord(&fill->map_s);
	init_coord(&fill->pie_s);
}

static void	init_player_struct(t_player *player)
{
	init_coord(&player->pos);
	init_coord(&player->first);
	init_coord(&player->last);
	init_coord(&player->next);
	ft_memset(player->quart, 0, 3);
	player->c = 0;
}

static void	init_play_struct(t_play *play)
{
	init_player_struct(&play->op);
	init_player_struct(&play->me);
	ft_memset(play->dir, 0, 3);
	play->help.tmp_dist = 0;
	play->help.small_dist = 0;
	init_coord(&play->help.pos_o_saved);
	init_coord(&play->help.pos_m_saved);
	init_coord(&play->pie_pos);
	init_coord(&play->pie_len);
}

void		init_structs(t_fill *fill, t_play *play)
{
	init_fill_struct(fill);
	init_play_struct(play);
}
