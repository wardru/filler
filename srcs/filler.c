/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 02:13:48 by agouby            #+#    #+#             */
/*   Updated: 2017/03/26 07:28:11 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	filler(void)
{
	int		fd;
	int		fd_vis;
	t_fill	fill;
	t_play	play;

	fd_vis = 50;
	if ((fd = open("test3.txt", O_RDONLY)) == -1)
		ft_print_error("Open failed.");
//	if ((fd_vis = open("visual.txt", O_RDWR)) == -1)
//		ft_print_error("Open failed.");
	fd = 0;
	get_player(fd, &play);
//	ft_dprintf(fd_vis, "%c\n", play.me.c);
	play.touched = 0;
	int n = 100000;
	while (n--){
	play.help.small_dist = 9000;
	init_structs(&fill, &play);
	store_infos(fd, fd_vis, &fill);
	if (!play.touched)
		get_closest_pos(&fill, &play);
	else
		move_piece(&fill, &play);
//	ft_printf("Direction is : %s\n\n", play.dir);
//	ft_printf("My position : [%d, %d]\n", play.me.pos.x, play.me.pos.y);
//	ft_printf("Op position : [%d, %d]\n\n", play.op.pos.x, play.op.pos.y);
//	ft_printf("Smallest distance : [%d]\n\n", play.help.small_dist);
//	ft_printf("I am in the quarter : %s\n\n", play.me.quart);
//	ft_printf("He is in the quarter : %s\n", play.op.quart);
//	ft_printf("Piece pos is : [%d, %d]\n", play.pie_pos.y, play.pie_pos.x);
//	ft_printf("Piece len is : [%d, %d]\n", play.pie_len.y, play.pie_len.x);
//	ft_printf("nb X = %d, nb O = %d\n", fill.xc, fill.oc);
//	print_dist(&fill);
//	get_start_piece(&fill, &play);
	ft_printf("%d %d\n", play.pie_pos.y, play.pie_pos.x);
	del_arrays(&fill);
	}
	
}

int		main(void)
{
	filler();
	return (0);
}
