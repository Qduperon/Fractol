/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 16:11:06 by qduperon          #+#    #+#             */
/*   Updated: 2016/10/04 15:42:19 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int		main(int ac, char **av)
{
	t_env	env;

	env = ft_init_env(ac, av);
	ft_draw(env);
	ft_display(env);
	mlx_hook(env.win, 2, 2, ft_keyhook, &env);
	mlx_mouse_hook(env.win, ft_mousehook, &env);
	mlx_hook(env.win, 6, (1L << 0), ft_juliahook, &env);
	mlx_loop(env.mlx);
	return (0);
}
