
SRC_PART = ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isdigit.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_calloc.c \
ft_strdup.c \
ft_memcpy.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_strmapi.c \
ft_striteri.c \
ft_itoa.c \
ft_split.c

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
CC = cc
OBJ_FILES = $(SRC_PART:.c=.o)

$(NAME): $(OBJ_FILES)
	@ar rc $(NAME) $(OBJ_FILES)

all: $(NAME) 

clean:
	rm -f $(OBJ_FILES)
	@rm -rf .bonus

fclean: clean
	rm -f $(NAME)
		
re: fclean all


.PHONY: fclean all re clean
