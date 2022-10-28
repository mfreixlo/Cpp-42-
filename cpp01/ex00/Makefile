SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

CC = g++

ZOMBIE = zombie

$(ZOMBIE):
	$(CC) $(SRC) -o $(ZOMBIE)

all: $(ZOMBIE)

clean:
	$(RM) $(ZOMBIE)

fclean: clean

re: clean all