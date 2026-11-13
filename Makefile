
NAME        = libft.a
# Compiler
CC          = cc
# Compiler flags
CFLAGS      = -Wall -Wextra -Werror -std=c99
AR          = ar rcs

# Source files
SRCS        = ft_atoi.c \
              ft_bzero.c \
              ft_calloc.c \
              ft_isalnum.c \
              ft_isalpha.c \
              ft_isascii.c \
              ft_isdigit.c \
              ft_isprint.c \
              ft_memchr.c \
              ft_memcmp.c \
              ft_memcpy.c \
              ft_memmove.c \
              ft_memset.c \
              ft_strchr.c \
              ft_strrchr.c \
              ft_strdup.c \
              ft_strlcat.c \
              ft_strlcpy.c \
              ft_strlen.c \
              ft_strncmp.c \
              ft_strnstr.c \
              ft_tolower.c \
              ft_toupper.c \
              ft_substr.c \
              ft_strjoin.c \
              ft_strtrim.c \
              ft_split.c \
              ft_itoa.c \
              ft_strmapi.c \
              ft_striteri.c \
              ft_putchar_fd.c \
              ft_putstr_fd.c \
              ft_putendl_fd.c \
              ft_putnbr_fd.c

# Object files
OFILES = $(SRCS:.c=.o)

# Set target
all: $(NAME) clean

# Compile .c files to .o files
#%.o: %.c libft.h
#	$(CC) $(CFLAGS) -c $< -o $@

# Create static library libft.a
$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES)

# Clear all .o object files
clean:
	rm -f $(OFILES)

# Clean all .o
fclean: clean
	rm -f $(NAME)

# re compile all of the content
re: fclean $(NAME)

.PHONY:  all clean fclean re
