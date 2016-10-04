/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 19:30:27 by qduperon          #+#    #+#             */
/*   Updated: 2016/10/04 15:41:34 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

t_env			*ft_reset(t_env *env)
{
	env->mod.xmax = 2.00;
	env->mod.xmin = -2.00;
	env->mod.ymax = 2.00;
	env->mod.ymin = -2.00;
	env->f.ci = 0.37015;
	env->f.cr = -0.75;
	env->f.ni = 0.00;
	env->f.nr = 0.00;
	env->f.mx = 0.00;
	env->f.my = 0.00;
	env->freq = 0.10;
	env->iter = 16;
	env->color = 2;
	env->motion = 1;
	env->zx = ((env->mod.xmax - env->mod.xmin) / (W - 1));
	env->zy = ((env->mod.ymax - env->mod.ymin) / (H - 1));
	return (env);
}

static void		ft_init_fract(t_env *env)
{
	env->f.ci = 0.37015;
	env->f.cr = -0.75;
	env->f.ni = 0.00;
	env->f.nr = 0.00;
	env->f.mx = 0.00;
	env->f.my = 0.00;
	env->mod.xmax = 2.00;
	env->mod.xmin = -2.00;
	env->mod.ymax = 2.00;
	env->mod.ymin = -2.00;
}

t_env			ft_init_env(int ac, char **av)
{
	t_env	env;

	ft_init_fract(&env);
	env.zx = ((env.mod.xmax - env.mod.xmin) / (W - 1));
	env.zy = ((env.mod.ymax - env.mod.ymin) / (H - 1));
	env.type = ft_check_param(ac, av);
	env.display = 1;
	env.value = 0;
	env.iter = 16;
	env.freq = 0.1;
	env.color = 2;
	env.motion = 1;
	env.img.height = H;
	env.img.width = W;
	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, W, H, "Fractol");
	env.img.ptr = mlx_new_image(env.mlx, env.img.width, env.img.height);
	env.img.img = mlx_get_data_addr(env.img.ptr, &env.img.bpp, \
			&env.img.ls, &env.img.endian);
	return (env);
}
