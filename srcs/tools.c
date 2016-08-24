/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 16:53:09 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/23 16:25:09 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			ft_exit(void)
{
	ft_putendl("Usage : ./fractol 'fractal'");
	ft_putstr("Available fractals :\n");
	ft_putendl("-Julia");
	ft_putendl("-Mandelbrot");
	ft_putendl("-Mandelbar");
	exit(0);
}

int			ft_check_param(int ac, char **av)
{
	if (ac == 2 && ft_strstr(av[1], "Julia") != 0)
		return (1);
	else if (ac == 2 && ft_strstr(av[1], "Mandelbrot") != 0)
		return (2);
	else if (ac == 2 && ft_strstr(av[1], "Mandelbar") != 0)
		return (3);
	else
		return (ft_exit());
}

static char	*ft_name(t_env env)
{
	if (env.type == 1)
		return ("Julia");
	if (env.type == 2)
		return ("Mandelbrot");
	if (env.type == 3)
		return ("Mandelbar");
	return (0);
}

void		ft_display(t_env env)
{
	if (env.display == 1)
	{
		mlx_string_put(env.mlx, env.win, 5, 5, 0xFFFF00, "Controls Keys");
		mlx_string_put(env.mlx, env.win, 5, 22, 0xFFFFF, "Move = Arrows");
		mlx_string_put(env.mlx, env.win, 5, 39, 0xFFFFF, "Iterations = +/-");
		mlx_string_put(env.mlx, env.win, 5, 56, 0xFFFFF,\
				"Frequence = page up/down");
		mlx_string_put(env.mlx, env.win, 5, 73, 0xFFFFF, "Motion = Space");
		mlx_string_put(env.mlx, env.win, 5, 91, 0xFFFFF, "Color = C");
		mlx_string_put(env.mlx, env.win, 5, 108, 0xFFFFF,\
				"Reset = clear");
		mlx_string_put(env.mlx, env.win, 5, 125, 0xFFFFF,\
				"Change fractal = tab");
		mlx_string_put(env.mlx, env.win, 5, 142, 0xFFFFF,\
				"Hide/Display inputs = Return");
		mlx_string_put(env.mlx, env.win, W - 225, 5, 0xFFFF00,\
				"Controls Mouse");
		mlx_string_put(env.mlx, env.win, W - 275, 22, 0xFFFFF,\
				"Zoom/dezoom = Scroll/click");
		mlx_string_put(env.mlx, env.win, W - 175, H - 50,\
				0xFFFF00, "Fractal Name :");
		mlx_string_put(env.mlx, env.win, W - 150, H - 33,\
				0xFFFFF, ft_name(env));
	}
}
