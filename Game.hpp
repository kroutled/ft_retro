#ifndef GAME_HPP
# define GAME_HPP

#include "Entity.hpp"

class Game{
    public:
        Game();
        ~Game();

        void    launchGame(const char *name);
        char    *getPlayerName();
        void    keepScore();
        void    displayTime();
        void    displayCoord(int y, int x);
        void    rules();

    private:
        char    *name;
        int     score;
        int     yPos;
        int     xPos;   
};

#endif