/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:30:33 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/17 19:41:24 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_julia(t_env env, int x, int y)
{
	int			i;
	long double zr;
	long double	zi;

	env.f.ni = env.mod.ymax - (long double)y * env.zy;
	env.f.nr = env.mod.xmin + (long double)x * env.zx;
	zr = SQUARE(env.f.nr);
	zi = SQUARE(env.f.ni);
	i = -1;
	while (++i < env.iter && (zr + zi) < 4)
	{
		env.f.ni *= env.f.nr;
		env.f.ni += env.f.ni + env.f.ci;
		env.f.nr = zr - zi + env.f.cr;
		zr = SQUARE(env.f.nr);
		zi = SQUARE(env.f.ni);
	}
	return (i);
}

int		ft_mandelbar(t_env env, int x, int y)
{
	int			i;
	double		zr;
	double		zi;

	env.f.pi = env.mod.ymax - (long double)y * env.zy;
	env.f.pr = env.mod.xmin + (long double)x * env.zx;
	env.f.ni = 0;
	env.f.nr = 0;
	zr = SQUARE(env.f.nr);
	zi = SQUARE(env.f.ni);
	i = -1;
	while (++i < env.iter && (zr + zi) < 4)
	{
		env.f.ni *= env.f.nr;
		env.f.ni += env.f.ni + env.f.pi;
		env.f.ni *= (-1);
		env.f.nr = zr - zi + env.f.pr;
		zr = SQUARE(env.f.nr);
		zi = SQUARE(env.f.ni);
	}
	return (i);
}

int		ft_mandelbrot(t_env env, int x, int y)
{
	int		i;
	double	zr;
	double	zi;

	i = -1;
	env.f.pi = env.mod.ymax - (long double)y * env.zy;
	env.f.pr = env.mod.xmin + (long double)x * env.zx;
	env.f.ni = 0;
	env.f.nr = 0;
	zr = SQUARE(env.f.nr);
	zi = SQUARE(env.f.ni);
	while (++i < env.iter && (zr + zi) < 4)
	{
		env.f.ni *= env.f.nr;
		env.f.ni += env.f.ni + env.f.pi;
		env.f.nr = zr - zi + env.f.pr;
		zr = SQUARE(env.f.nr);
		zi = SQUARE(env.f.ni);
	}
	return (i);
}
