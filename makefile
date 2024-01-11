CODE_DIR := ./srcs/
HEADER_DIR := ./includes/
CFLAGS = -Wall -Wextra -g
CFILES := $(wildcard $(CODE_DIR)*.c)
COBJECTS = $(patsubst %.c, %.o , $(CFILES))
BINARY = libft.a

all : $(BINARY)

$(BINARY) : $(COBJECTS)
		ar -rc $@ $^
		ranlib $(BINARY)

%.o : %.c
		gcc $(CFLAGS) -c -o $@ $^ -I $(HEADER_DIR)

clean:
		rm -f $(COBJECTS)

fclean: clean
		rm -f $(BINARY)

re : fclean all