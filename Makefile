NAME = ft_retro

all:
	g++ -Wall -Werror -Wextra main.cpp Ship.cpp Entity.cpp Enemy.cpp -lncurses -o $(NAME)

clean:
	rm -rf $(NAME)