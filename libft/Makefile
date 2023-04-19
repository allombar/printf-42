SRCDIR	= ./srcs/
SRCNAME	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_striteri.c ft_strmapi.c

BONUSNAME = ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstclear.c

SRCS	= ${addprefix ${SRCDIR}, ${SRCNAME}}

BONUS	= ${addprefix ${SRCDIR}, ${BONUSNAME}}

INCDIR	= ./includes/

OBJS	= ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I ${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

bonus: ${BONUS_OBJS}
		ar rc ${NAME} ${BONUS_OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}
		${RM} ${BONUS_OBJS}

fclean:		clean
		${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all