# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alienard <alienard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/24 14:20:28 by alienard          #+#    #+#              #
#    Updated: 2020/09/24 14:34:58 by alienard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRCS		= megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f

CLANG		= clang++
HEADER		= -I ./

CPPFLAGS	= -Wall -Wextra -Werror -g $(HEADER)

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CLANG) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(OBJSBONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		re all clean fclean bonus