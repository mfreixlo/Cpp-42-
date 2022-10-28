SRC = main.cpp zombieHorde.cpp Zombie.cpp

CC = g++

ZOMBIEHORDE = zombieHorde

$(ZOMBIEHORDE):
	$(CC) $(SRC) -o $(ZOMBIEHORDE)

all: $(ZOMBIEHORDE)

clean:
	$(RM) $(ZOMBIEHORDE)

fclean: clean

re: clean all