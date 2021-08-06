# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: safoh <safoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2021/08/04 13:58:03 by safoh         #+#    #+#                  #
#    Updated: 2021/08/06 16:07:35 by safoh         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := snail
BUILD_DIR := ./build
SRC_DIRS := ./src
INC_DIRS := ./include
SRCS := $(shell find $(SRC_DIRS) -name *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
CC = gcc

# Add a prefix to INC_DIRS. So moduleA would become -ImoduleA. GCC understands this -I flag
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# The -MMD and -MP flags together generate Makefiles for us!
# These files will have .d instead of .o as the output.
CFLAGS = -Wall -Wextra -Werror
CRITERION = -lcriterion

all: $(NAME)

$(BUILD_DIR)/$(NAME): $(OBJS)
	$(CC) $(CRITERION) $(OBJS) -o $@

$(BUILD_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf *.o $(NAME)

re: fclean all

.PHONY: all clean fclean
