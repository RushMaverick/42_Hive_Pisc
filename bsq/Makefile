# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junheeki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 11:55:04 by junheeki          #+#    #+#              #
#    Updated: 2022/08/28 13:17:05 by junheeki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq.a
SRC = srcs/*.c
OBJ = *.o
INCLUDES = includes/*.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
