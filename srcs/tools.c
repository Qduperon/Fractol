/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 16:53:09 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/10 19:43:18 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_exit(void)
{
	ft_putendl("Usage : ./fractol 'fractal'");
	ft_putstr("Available fractals :\n");
	ft_putendl("-Julia");
	ft_putendl("-Mandelbrot");
	exit(0);
}

int		ft_check_param(int ac, char **av)
{
	if (ac == 2 && ft_strstr(av[1], "Julia") != 0)
		return (1);
	else if (ac == 2 && ft_strstr(av[1], "Mandelbrot") != 0)
		return (2);
	else
		return (ft_exit());
}
