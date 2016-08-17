/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:08:31 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/17 17:42:09 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	ft_fractal(t_env env, int x, int y)
{
	if (env.type == 1)
		return (ft_julia(env, x, y));
	if (env.type == 2)
		return (ft_mandelbrot(env, x, y));
	if (env.type == 3)
		return (ft_mandelbar(env, x, y));
	return (0);
}

int		ft_draw(t_env env)
{
	int	color;
	int	pixel;
	int x;
	int y;

	y = 0;
	while (y < H)
	{
		x = 0;
		while (x < W)
		{
			pixel = ft_fractal(env, x, y);
			color = ft_color(pixel, env);
			ft_pixel_put(env, x, y, color);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(env.mlx, env.win, env.img.ptr, 0, 0);
	//ft_display(env);
	return (0);
}
