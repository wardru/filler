/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 06:58:06 by agouby            #+#    #+#             */
/*   Updated: 2017/03/24 18:55:44 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	del_arrays(t_fill *fill)
{
	int i;

	i = 0;
	while (i < fill->map_s.y)
		free(fill->map[i++]);
	free(fill->map);
	i = 0;
	while (i < fill->pie_s.y)
		free(fill->piece[i++]);
	free(fill->piece);
}
