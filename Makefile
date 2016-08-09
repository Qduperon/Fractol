# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qduperon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/16 13:22:36 by qduperon          #+#    #+#              #
#    Updated: 2016/08/08 16:59:29 by qduperon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                               // NAME \\                                     #
#==============================================================================#

NAME = fractol

#==============================================================================#
#                           //  SOURCES  \\                                    #
#==============================================================================#

SRCS = srcs/main.c \
	   srcs/tools.c \

#==============================================================================#
#                             //  FLAGS  \\                                    #
#==============================================================================#

FLAGS = -Wall -Werror -Wextra

#==============================================================================#
#                            // COMPILATION \\                                 #
#==============================================================================#

all: $(NAME)

$(NAME):
	@echo "Begin Fractol..."
	make -C libft/ re
	make -C minilibx_macos/ re
	gcc -o $(NAME) $(FLAGS) $(SRCS) -lmlx -framework OpenGL -framework AppKit \
	   	-I./includes -lft -L./libft
	@echo "Fractol Done"

#==============================================================================#
#                              // DELETING \\                                  #
#==============================================================================#

clean:
	make clean -C libft

fclean:
	make fclean -C libft
	make clean -C minilibx_macos
	rm -f $(NAME)

#==============================================================================#
#                             // RETRY \\                                      #
#==============================================================================#

re: fclean all

.PHONY : all clean fclean re
