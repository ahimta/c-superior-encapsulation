CC = gcc
CFLAGS = -Wall -Werror -Wpedantic -O0 -g

SRCS = main.c Point.c
OBJS = $(SRCS:.c=.o)

MAIN = encapsulation

.PHONY: clean

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN)
