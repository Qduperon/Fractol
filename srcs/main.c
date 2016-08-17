/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 16:37:45 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/17 18:17:02 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int ac, char **av)
{
	t_env	env;

	env = ft_init_env(ac, av);
	ft_draw(env);
//	ft_display(env);
	mlx_hook(env.win, 2, 2, ft_keyhook, &env);
	mlx_loop(env.mlx);
	return (0);
}
