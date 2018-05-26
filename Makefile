NAME = ft_retro

all:
	g++ -Wall -Werror -Wextra main.cpp -lncurses -o $(NAME)

clean:
	rm -rf $(NAME)