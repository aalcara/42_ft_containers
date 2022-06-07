# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 16:51:32 by aalcara-          #+#    #+#              #
#    Updated: 2022/06/06 20:23:14 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_containers

MAIN = main.cpp
TEST = vector.cpp
OBJ = $(SRC:.cpp=.o)

TDIR = tests/
SDIR = containers/
ODIR = obj/
LDIR = log/

TEST_DIR = $(addprefix $(TDIR), $(TEST))

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I./$(SDIR) -I./$(TDIR)
RM = rm -fr

$(ODIR)%.o:	$(TDIR)%.cpp
	mkdir -p $(ODIR)
	$(CPP) $(CPPFLAGS) $(INC) -c $< -o $@

$(NAME): $(TEST_DIR) $(MAIN)
	$(CPP) $(CPPFLAGS) $(INC) $(MAIN) $< -o $@
	$(CPP) $(CPPFLAGS) $(INC) $(MAIN) $< -D _STL -o $@_stl

all: $(NAME)

exec: $(NAME)
	mkdir -p $(LDIR)
	./$(NAME)_stl > $(LDIR)stl.log
	./$(NAME) > $(LDIR)ft.log

test: exec
	diff $(LDIR)ft.log $(LDIR)stl.log

clean:
	$(RM) $(ODIR)
	$(RM) $(LDIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME)_stl

re: fclean all