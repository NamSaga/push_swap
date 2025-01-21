NAME        := push_swap
CC        := gcc
FLAGS    := -Wall -Wextra -Werror 

SRCS        :=      srcs/core/ft_split.c \
                          srcs/core/check_error.c \
                          srcs/core/init_a.c \
                          srcs/core/init_b.c \
                          srcs/core/main.c \
                          srcs/core/init_stacks.c \
                          srcs/core/utils.c \
                          srcs/moves/push.c \
                          srcs/moves/rev_rotate.c \
                          srcs/moves/rotate.c \
                          srcs/core/sort_stacks.c \
                          srcs/core/mid_sort.c \
                          srcs/moves/swap.c \
                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
			@ ${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

bonus:		all

clean:
			@ ${RM} srcs/core/ft_split.o srcs/core/check_error.o srcs/core/init_a.o srcs/core/init_b.o srcs/core/main.o srcs/core/init_stacks.o srcs/core/utils.o srcs/moves/push.o srcs/moves/rev_rotate.o srcs/moves/rotate.o srcs/core/sort_stacks.o srcs/core/mid_sort.o srcs/moves/swap.o


fclean:		clean
			@ ${RM} ${NAME}

re:			fclean all
