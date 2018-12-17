/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onahiz <onahiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 06:26:28 by aelouarg          #+#    #+#             */
/*   Updated: 2018/11/24 03:29:50 by onahiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

t_point		mirror(t_point p, int x)
{
	t_point pp;

	pp.x = 2 * x - p.x;
	pp.y = p.y;
	return (pp);
}

t_point		rotate(t_point p, int z, int depth)
{
	t_point	pp;
	double	tata;

	tata = 60;
	p.x -= 600;
	p.y -= 600;
	pp.x = 600 + p.x * cos(tata) - p.y * sin(tata - 90);
	pp.y = 600 + p.x * sin(tata) + p.y * cos(tata - 90) - z * depth;
	return (mirror(pp, 900));
}
