SRC = main.cpp Fixed.cpp

CC = c++
FLAGS = -Wall -Wextra -Werror

FIXED = fixed

$(FIXED):
	$(CC) $(SRC) -o $(FIXED)

all: $(FIXED)

clean:
	$(RM) $(FIXED)

re: clean all