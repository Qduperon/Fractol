/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:50:50 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/17 15:59:33 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_pixel_put(t_env env, int x, int y, int color)
{
	int		index;

	if (x >= 0 && x < W && y >= 0 && y < H)
	{
		index = (x * env.img.bpp / 8) + (y * env.img.ls);
		env.img.img[index] = color % 256;
		env.img.img[index + 1] = (color >> 8) % 256;
		env.img.img[index + 2] = (color >> 16) % 256;
	}
}

int		ft_color(int i, t_env env)
{
	double	c;
	int		r;
	int		g;
	int		b;

	if (i == env.iter)
		return (0);
	c = env.freq * (i);
	r = cos(c) * 256;
	g = cos(c + env.color) * 256;
	b = cos(c + env.color + env.color) * 256;
	return ((r << 16) + (b << 8) + g);
}
