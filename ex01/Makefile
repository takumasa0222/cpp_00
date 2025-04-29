# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamatsuu <tamatsuu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 00:43:14 by tamatsuu          #+#    #+#              #
#    Updated: 2025/04/29 22:40:29 by tamatsuu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
INCLUDES = -I includes
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS    = 	src/PhoneBook.cpp \
			src/main.cpp \
			src/Contact.cpp \
			src/PhoneBookApp.cpp \
			src/StringHelper.cpp
			
OBJS    = $(SRCS:.cpp=.o)
LIBDIR  = 
LIBS    = 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBDIR) $(LIBS) -o $@


%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	./megaphone
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone  Damnit " ! " "Sorry students, I thought this thing was off."

.PHONY: all clean fclean re 