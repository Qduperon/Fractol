/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 16:53:09 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/09 16:20:14 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_exit(void)
{
	ft_putendl("Usage : ./fractol 'fractal'");
	ft_putstr("Available fractals :\n");
	ft_putendl("-Julia");
	ft_putendl("-Mandelbrot");
}

void	ft_check_param(int ac, char **av)
{
	if (ac == 2 && ft_strstr(av[1], "Julia") != 0)
		return ;
	else if (ac == 2 && ft_strstr(av[1], "Mandelbrot") != 0)
		return ;
	else
		ft_exit();
}
