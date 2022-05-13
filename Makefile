# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 16:51:32 by aalcara-          #+#    #+#              #
#    Updated: 2022/05/13 18:02:48 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_containers

INTRA = main.cpp
VECTOR = vector.cpp

SRC = vector.cpp

TDIR = tests/
SDIR = containers/
ODIR = obj/

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I./$(SDIR)
RM = rm -fr

vector:	$(TDIR)$(VECTOR)
	mkdir -p $(ODIR)
	$(CPP) $(CPPFLAGS) $(INC) $< -o $(ODIR)$@
	$(CPP) $(CPPFLAGS) $(INC) $< -D _STL -o $(ODIR)$@_stl

intra:	$(TDIR)$(INTRA)
	mkdir -p $(ODIR)
	$(CPP) $(CPPFLAGS) $(INC) $< -o $(ODIR)$@
	$(CPP) $(CPPFLAGS) $(INC) $< -D _STL -o $(ODIR)$@_stl

test_vector:	vector
	./$(ODIR)vector
	./$(ODIR)vector_stl

test_intra:	intra
	./$(ODIR)intra
	./$(ODIR)intra_stl

clean:
	$(RM) $(ODIR)

fclean: clean

re: fclean all