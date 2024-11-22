NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_bzero.c\
       ft_isalnum.c\
       ft_isalpha.c\
       ft_isascii.c\
       ft_isdigit.c\
       ft_isprint.c\
       ft_memcpy.c\
       ft_memmove.c\
       ft_memset.c\
       ft_strchr.c\
       ft_strlen.c\
       ft_tolower.c\
       ft_toupper.c\
       ft_strlcpy.c\
       ft_strrchr.c
       
OBJS = $(SRCS:.c=.o)

DEPS = $(SRCS:.c=.d)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


