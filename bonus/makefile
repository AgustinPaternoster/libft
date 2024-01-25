CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFILES := $(wildcard $(CODE_DIR)*.c)
BINARY = app

$(BINARY) : $(CFILES)
		$(CC) $(CFLAGS) -o $@ $^

clean:
		rm -f $(BINARY)