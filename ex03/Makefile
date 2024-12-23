# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 19:00:17 by saperrie          #+#    #+#              #
#    Updated: 2024/12/23 01:50:59 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

INCLUDE_DIR = inc/

CFLAGS = -Wall -Wextra -Werror -std=c++98
IFLAGS = -I$(INCLUDE_DIR)
DFLAGS = -MMD -MP

OBJECT_DIR = .obj/

OBJECTS = $(patsubst %.cpp,$(OBJECT_DIR)%.o,\
		main.cpp \
			)

OBJ_SUBDIRS = $(sort $(dir ${OBJECTS}))

DEPENDENCIES = $(OBJECTS:.o=.d)

NAME = MakeLoveNotWar

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
