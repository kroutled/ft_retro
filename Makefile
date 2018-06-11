NAME = ft_retro

FILES = main.cpp Entity.cpp Game.cpp Enemy.cpp Lazers.cpp Ship.cpp

FLAGS =  -Wall -Wextra -Werror -lncurses

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(FILES) 

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME) *.a

re: fclean all