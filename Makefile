# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 16:51:32 by aalcara-          #+#    #+#              #
#    Updated: 2022/05/14 20:22:39 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_containers

MAIN = main.cpp
SRC = vector.cpp
OBJ = $(SRC:.cpp=.o)

TDIR = tests/
SDIR = containers/
ODIR = obj/
LDIR = log/

DIR_OBJ = $(addprefix $(ODIR), $(OBJ))

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I./$(SDIR) -I./$(TDIR)
RM = rm -fr

$(ODIR)%.o:	$(TDIR)%.cpp
	mkdir -p $(ODIR)
	$(CPP) $(CPPFLAGS) $(INC) -c $< -o $@

$(NAME): $(DIR_OBJ) $(MAIN)
	$(CPP) $(CPPFLAGS) $(INC) $(MAIN) $< -o $@
	$(CPP) $(CPPFLAGS) $(INC) $(MAIN) $< -D _STL -o $@_stl

all: $(NAME)

test: $(NAME)
	mkdir -p $(LDIR)
	./$(NAME) > $(LDIR)ft.log
	./$(NAME)_stl > $(LDIR)stl.log
	diff $(LDIR)ft.log $(LDIR)stl.log

clean:
	$(RM) $(ODIR)
	$(RM) $(LDIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME)_stl

re: fclean all