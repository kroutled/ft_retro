#include "Game.hpp"
#include "Ship.hpp"
#include <string>

Game::Game(){
    return;
}

void    Game::launchGame(const char *name){
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));

    mvprintw(2, 5, "oooo   oooo oooooooooo    ooooooo  ooooo  oooo ooooooooooo   o \n");
    mvprintw(3, 5, " 888  o88    888    888 o888   888o 888    88  88  888  88  888 \n");
    mvprintw(4, 5, " 888888      888oooo88  888     888 888    88      888     8  88 \n");
    mvprintw(5, 5, " 888  88o    888  88o   888o   o888 888    88      888    8oooo88 \n");
    mvprintw(6, 5, "o888o o888o o888o  88o8   88ooo88    888oo88      o888o o88o  o888o \n");                                                                    
    mvprintw(9, 5,"WELCOME %s\n", name);
    
    mvprintw(10, 5,"PRESS 'S' TO PROCEED.\n");

    attroff(COLOR_PAIR(1));

 return;
}

void    Game::rules(){

    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(1));

    mvprintw(2, 5,"oooooooooo ooooo  oooo ooooo       ooooooooooo  oooooooo8\n");
    mvprintw(3, 5," 888    888 888    88   888         888    88  888  \n");
    mvprintw(4, 5," 888oooo88  888    88   888         888ooo8     888oooooo  \n");
    mvprintw(5, 5," 888  88o   888    88   888      o  888    oo          888  \n");
    mvprintw(6, 5,"o888o  88o8  888oo88   o888ooooo88 o888ooo8888 o88oooo888   \n");
    mvprintw(9, 5,"(1) USE LEFT AND RIGHT KEYS TO NAVIGATE YOUR PLAYER SHIP.\n");
    mvprintw(10, 5,"(2) USE THE SPACEBAR TO LAUNCH LAZER GUN AND SHOOT AT ENEMIES.\n");
    mvprintw(11, 5,"(3) FOR EACH ENEMY YOU SHOOT, YOU SCORE A POINT.\n");
    mvprintw(12, 5,"(4) IF ENEMY LANDS ON THE GROUND BEFORE YOU SHOOT, YOU DIE.\n");
    mvprintw(15, 5,"PRESS 'S' KEY TO START THE GAME. GOODLUCK!\n");
    mvprintw(17, 5,"PRESS 'ESC' TO QUIT THE.\n");

    attroff(COLOR_PAIR(1));                                                      
}