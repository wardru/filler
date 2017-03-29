/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_init.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 01:07:29 by agouby            #+#    #+#             */
/*   Updated: 2017/03/29 01:08:30 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visual.h"

void	v_init_p(t_p *p)
{
	p->c = 0;
	p->nb_pos = 0;
}

void	v_init(t_v *v)
{
	v_init_p(&v->p1);
	v_init_p(&v->p2);
}