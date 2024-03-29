/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stridigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agouby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 02:55:43 by agouby            #+#    #+#             */
/*   Updated: 2016/12/14 03:47:32 by agouby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisdigit(char *str)
{
	if (*str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		if (*(str + 1) == '\0')
			return (1);
		str++;
	}
	return (0);
}
