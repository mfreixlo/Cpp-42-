SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CC = g++

FLAGS = -g 

WEAPON = weapon

$(WEAPON):
	$(CC) $(SRC) -o $(WEAPON)

all: $(WEAPON)

clean:
	$(RM) $(WEAPON)

fclean: clean

re: clean all