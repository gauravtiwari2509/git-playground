CC = gcc
CFLAGS = -Wall -Wextra -g

SRCS = src/factorial.c src/reverse.c
TEST_SRCS = tests/test_factorial.c tests/test_reverse.c
OBJS = $(SRCS:.c=.o)
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_EXECS = $(TEST_SRCS:.c=)

all: $(TEST_EXECS)

test_factorial: tests/test_factorial.c src/factorial.o
    $(CC) $(CFLAGS) -o $@ $^

test_reverse: tests/test_reverse.c src/reverse.o
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c -o $@ $<

clean:
    rm -f $(OBJS) $(TEST_OBJS) $(TEST_EXECS)

.PHONY: all clean