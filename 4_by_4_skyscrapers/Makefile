# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                        |o_o || |                 #
#                                                      +:+                     #
#    By: safoh <safoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2021/08/04 13:58:03 by safoh         #+#    #+#                  #
#    Updated: 2021/11/24 14:20:52 by safoh        \___)=(___/                  #
#                                                                              #
# **************************************************************************** #

NAME			:=	sky
CC				:=	gcc
CFLAGS			=	-Wall -Wextra -Werror -I$(HOME)/.brew/Cellar/criterion/2.3.3/include
CRITERION		:=	-lcriterion -L$(HOME)/.brew/Cellar/criterion/2.3.3/lib
RM				:=	rm -f

################################################################################
# SRCS			=	RESOURCES
# SRC_DIR		=	SOURCES DIRECTORY
# INC_DIR		=	INCLUDES DIRECTORY
# BUILD_DIR		=	BUILD DIRECTORY
# OBJS			=	OBJECTS

SRCS			:=	main.c SolvePuzzle.c
SRC_DIR			:=	./src
INC_DIR			:=	./include
BUILD_DIR		:=	./build
OBJS			:=	$(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

###############################################################################
# MESSSAGE		=	Message after compiling
# C_MESSAGE		=	Message for building objects

MESSSAGE		=	"Run ./snail to see the results"
C_MESSAGE		=	"Building C objects... %-33.33s\r"

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\n"
	$(CC) $(CRITERION) $(OBJS) -o $@
	@echo $(MESSSAGE)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	@printf $(C_MESSAGE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@echo "Objects cleaned"

fclean: clean
	$(RM) $(NAME)
	@echo "Executable cleaned"

re: fclean all

.PHONY: all clean fclean
