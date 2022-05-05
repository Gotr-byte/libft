# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbiederm <pbiederm@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 18:55:45 by pbiederm          #+#    #+#              #
#    Updated: 2022/05/04 12:18:17 by pbiederm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c

all: fto libft

libft: fto
	ar rc $(NAME) *.o
fto: $(SRC)
	gcc -c -Wextra -Werror -Wall $(SRC)
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
