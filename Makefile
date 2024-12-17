# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saperrie <saperrie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 19:00:17 by saperrie          #+#    #+#              #
#    Updated: 2024/12/12 19:04:27 by saperrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

INCLUDE_DIR = inc/

CFLAGS = -Wall -Wextra -Werror -std=c++98
IFLAGS = -I$(INCLUDE_DIR)
DFLAGS = -MMD -MP

OBJECT_DIR = .obj/

OBJECTS = $(patsubst srcs/%.cpp,$(OBJECT_DIR)%.o,\
		main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \
							)

OBJ_SUBDIRS = $(sort $(dir ${OBJECTS}))

DEPENDENCIES = $(OBJECTS:.o=.d)

NAME = zombie

.PHONY: all
all: $(NAME)

-include $(DEPENDENCIES)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(IFLAGS) $(DFLAGS) -o $@ $(OBJECTS)

$(OBJECT_DIR)%.o: %.cpp | $(OBJECT_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) $(DFLAGS) -o $@ -c $<

$(OBJECT_DIR):
	mkdir -p ${OBJ_SUBDIRS}

.PHONY: clean
clean:
	rm -rf $(OBJECT_DIR)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean
	@make --no-print-directory all

.PHONY: debug
debug:
	@clear
	@make -s re CFLAGS+="-g3 -fsanitize=address"
	@./$(NAME)

.PHONY: run
run:
	@clear
	@make -sj re
	@./$(NAME)
