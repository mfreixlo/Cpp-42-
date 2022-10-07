SRC = ex01.cpp Contact.cpp PhoneBook.cpp

CC = c++
FLAGS = -Wall -Wextra -Werror

PHONE = phonebook

$(PHONE):
	$(CC) $(SRC) -o $(PHONE)

all: $(PHONE)

clean:
	$(RM) $(PHONE)

re: clean all