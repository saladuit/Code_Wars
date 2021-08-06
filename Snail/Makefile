# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: safoh <safoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2021/08/04 13:58:03 by safoh         #+#    #+#                  #
#    Updated: 2021/08/04 17:42:37 by safoh         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := snail
BUILD_DIR := ./build
SRC_DIRS := ./src
INC_DIRS := ./include
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
CC = gcc

# Add a prefix to INC_DIRS. So moduleA would become -ImoduleA. GCC understands this -I flag
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# The -MMD and -MP flags together generate Makefiles for us!
# These files will have .d instead of .o as the output.
CFLAGS = -Wall -Wextra -Werror
CITERION = -lcriterion

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CITERION) $^ -o $(addprefix $(BUILD_DIR)/, $@)

$(addprefix $(BUILD_DIR)/, %.o): $(addprefix $(SRC_DIRS)/, %.c)
	$(CC) -c $< $(CFLAGS) -o $@

clean:
	rm -rf *.o

fclean:
	rm -rf *.o $(NAME)

re: fclean all

.PHONY: all clean fclean
