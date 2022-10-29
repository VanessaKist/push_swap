NAME = push_swap

PATH_SRCS = ./sources/
PATH_OBJS = ./objects/
PATH_INCL = ./includes/
PATH_LIBFT = ./libraries/42_libft/

SRCS = $(addprefix $(PATH_SRCS), push_swap.c \
		ft_get_index.c \
		choose_sorting.c \
		sort_for_three.c) \
		$(addprefix $(PATH_SRCS)moves/,\
		push.c\
		rotate.c\
		rrotate.c\
		swap.c)

OBJS = $(patsubst $(PATH_SRCS)%.c, $(PATH_OBJS)%.o, $(SRCS))

LIBFT = $(PATH_LIBFT)libft.a

CC = cc
//CFLAGS = -Wall -Wextra -Werror -ggdb
IFLAGS = -I $(PATH_INCL)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS) 
	@$(CC) $(CFLAGS) $(IFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)moves/
	$(CC) $(CFLAGS) $(IFLAGS) -I ./libraries/42_libft/libft.h -c $< -o $@

$(LIBFT):
	make -C $(PATH_LIBFT)

clean:
	rm -rf $(PATH_OBJS)
	make clean -C $(PATH_LIBFT)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(PATH_LIBFT)

re: fclean all

PHONY: all clean fclean re