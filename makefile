CC = gcc
CFLAGS = -Wall -Wextra -g
CHECK_FLAGS = -lcheck -lm -lsubunit

# Directories
SRC_DIR = src
TEST_DIR = tests
BIN_DIR = bin

# Source and test files
SRCS = $(wildcard $(SRC_DIR)/*.c)
TESTS = $(wildcard $(TEST_DIR)/test_*.c)
TEST_BINS = $(patsubst $(TEST_DIR)/test_%.c, $(BIN_DIR)/test_%, $(TESTS))

# Default target
all: $(TEST_BINS)
	@echo "All tests compiled."

# Rule to compile test binaries
$(BIN_DIR)/test_%: $(TEST_DIR)/test_%.c $(SRCS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(SRCS) $(CHECK_FLAGS)

# Rule to run all tests
test: $(TEST_BINS)
	@for test in $(TEST_BINS); do \
		echo "Running $$test..."; \
		$$test || exit 1; \
	done
	@echo "All tests passed."

# Clean up build files
clean:
	rm -rf $(BIN_DIR)

.PHONY: all test clean