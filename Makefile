# Standard
NAME				= push_swap

# Directories
LIBFT				= ./libft/libft.a
INC					= inc
SRC_DIR				= srcs/
OBJ_DIR				= obj/

# Compiler and CFlags
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I
RM					= rm -f

# Source Files
MOVES_DIR		=	$(SRC_DIR)moves/push.c \
						$(SRC_DIR)moves/rev_rotate.c \
						$(SRC_DIR)moves/rotate.c \
						$(SRC_DIR)moves/sort_stacks.c \
						$(SRC_DIR)moves/sort_three.c \
						$(SRC_DIR)moves/swap.c

CORE_DIR		=	$(SRC_DIR)core/handle_errors.c \
						$(SRC_DIR)core/init_a_to_b.c \
						$(SRC_DIR)core/init_b_to_a.c \
						$(SRC_DIR)core/main.c \
						$(SRC_DIR)core/ft_split.c \
						$(SRC_DIR)core/stack_init.c \
						$(SRC_DIR)core/stack_utils.c

# Concatenate all source files
SRCS 				= $(MOVES_DIR) $(CORE_DIR)

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

# Build rules
start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re
