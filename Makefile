NAME        := push_swap
CC        := gcc
FLAGS    := -Wall -Wextra -Werror 

SRCS        :=      srcs/core/ft_split.c \
                          srcs/core/check_error.c \
                          srcs/core/init_a_to_b.c \
                          srcs/core/init_b_to_a.c \
                          srcs/core/main.c \
                          srcs/core/init_stacks.c \
                          srcs/core/utils.c \
                          srcs/moves/push.c \
                          srcs/moves/rev_rotate.c \
                          srcs/moves/rotate.c \
                          srcs/moves/sort_stacks.c \
                          srcs/moves/sort_three.c \
                          srcs/moves/swap.c \
                          lib_utils/ft_printf.c \
                          lib_utils/ft_putnbr.c \
                          lib_utils/ft_putstr.c \
                          lib_utils/ft_print_pointer.c \
                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
			@ ${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o

fclean:		clean
			@ ${RM} ${NAME}

re:			fclean all
