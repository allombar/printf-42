LIBFT = ./libft/libft.a

NAME = libftprintf.a

SRCS =      srcs/ft_printf.c 		\
			srcs/ft_utils.c	 		\
			srcs/ft_parse.c			\
			srcs/ft_print_vars.c	\
			srcs/ft_print_str.c		
		
CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	rm *.o
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all