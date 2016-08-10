/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 18:30:39 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/10 19:43:13 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/includes/libft.h"
# include "../minilibx_macos/mlx.h"

# define W		800
# define H		800

# define ECHAP	53
# define UP		126
# define DOWN	125
# define RIGHT	124
# define LEFT	123
# define RESET	71
# define C		8

typedef struct	s_env
{
	int			type;
	void		*mlx;
	void		*win;
}				t_env;

int		ft_check_param(int ac, char **av);
int		ft_exit(void);
t_env	ft_init_env(int ac, char **av);

#endif
