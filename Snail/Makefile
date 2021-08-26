# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: safoh <safoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2021/08/04 13:58:03 by safoh         #+#    #+#                  #
#    Updated: 2021/08/11 14:20:40 by safoh         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			:=	snail
CC				:=	gcc
CFLAGS			=	-Wall -Wextra -Werror
CRITERION		:=	-lcriterion
RM				:=	rm -f

################################################################################
# SRCS			=	RESOURCES
# SRC_DIR		=	SOURCES DIRECTORY
# INC_DIR		=	INCLUDES DIRECTORY
# BUILD_DIR		=	BUILD DIRECTORY
# OBJS			=	OBJECTS

SRCS			:=	main.c snail.c
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
