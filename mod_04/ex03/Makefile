# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abobas <abobas@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/18 20:49:13 by abobas        #+#    #+#                  #
#    Updated: 2020/06/20 01:08:12 by abobas        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = 		main.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp \
			Character.cpp \
			MateriaSource.cpp


INCLUDE =	AMateria.hpp \
			Ice.hpp \
			Cure.hpp \
			ICharacter.hpp \
			Character.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp
			
NAME = 		bocal

FLAGS =		-Wall -Werror -Wextra -std=c++98 -pedantic

CC =		clang++

all: 		$(NAME)

$(NAME): 	$(SRC) $(INCLUDE)
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all