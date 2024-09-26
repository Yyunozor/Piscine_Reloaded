# Name of the library
NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCS_DIR = srcs/
INCL_DIR = includes/

# Source files
SRCS = $(SRCS_DIR)ft_putchar.c \
		$(SRCS_DIR)ft_putstr.c \
		$(SRCS_DIR)ft_strcmp.c \
		$(SRCS_DIR)ft_strlen.c \
		$(SRCS_DIR)ft_swap.c

# Object files
OBJS = $(SRCS:.c=.o)

# Archive command for creating the library
AR = ar rcs

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(SRCS_DIR)%.o: $(SRCS_DIR)%.c
	$(CC) $(CFLAGS) -I $(INCL_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony targets to avoid conflicts with file names
.PHONY: all clean fclean re