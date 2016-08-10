/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 19:30:27 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/10 19:41:28 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_env	ft_init_env(int ac, char **av)
{
	t_env	env;

	//ft_init_fract(&env);
	env.type = ft_check_param(ac, av);
	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, W, H, "Fractol");
	return (env);
}
