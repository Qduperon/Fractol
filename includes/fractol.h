/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 18:30:39 by qduperon          #+#    #+#             */
/*   Updated: 2016/08/16 18:40:52 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/includes/libft.h"
# include "../minilibx_macos/mlx.h"
# include <math.h>

# define W				800
# define H				800
# define SQUARE(x)		(x * x)

# define ECHAP			53
# define UP				126
# define DOWN			125
# define RIGHT			124
# define LEFT			123
# define RESET			71
# define C				8
# define MOTION			49
# define INC_ITER		69
# define DEC_ITER		78
# define INC_FREQ		116
# define DEC_FREQ		121
# define CHANGE_FRACT	48
# define MENU			36
# define VALUES			258

typedef struct	s_fract
{
	double		ci;
	double		cr;
	double		ni;
	double		nr;
	double		oi;
	double		orl;
	double		pi;
	double		pr;
	double		mx;
	double		my;
}				t_fract;

typedef struct	s_img
{
	char		*img;
	int			bpp;
	int			endian;
	int			height;
	int			ls;
	int			width;
	void		*ptr;
}				t_img;

typedef	struct	s_mod
{
	double		xmin;
	double		xmax;
	double		ymin;
	double		ymax;
	double		omx;
	double		omy;
}				t_mod;

typedef struct	s_env
{
	double		freq;
	double		zx;
	double		zy;
	int			color;
	int			display;
	int			iter;
	int			motion;
	int			type;
	int			value;
	t_fract		f;
	t_img		img;
	t_mod		mod;
	void		*mlx;
	void		*win;
}				t_env;

int				ft_check_param(int ac, char **av);
int				ft_exit(void);
t_env			ft_init_env(int ac, char **av);

#endif
