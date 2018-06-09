/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:12:55 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:12:56 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "Entity.hpp"
#include "Enemy.hpp"
#include "Ship.hpp"
//#include "Lazers.hpp"

//function used to set up the window that the game is in
void    ft_createWindow(void)
{
    initscr();              //switches terminal to curses mode
    cbreak();               //allows signals to be used i.e cntrl Z
    noecho();               //stops charecter input from displaying
    keypad(stdscr, TRUE);   //allows input of keypad and Fkeys
    curs_set(0);            //sets the cursor to invisible so that we cant see it in window
    nodelay(stdscr, TRUE);
}

int main(void)
{   
    srand(time(NULL));
    int x = 0;
    int y = 0;
    int key = 0;
    int i = 0;

    ft_createWindow();
    getmaxyx(stdscr, y, x);

    Ship    player = Ship(0, 0, y, x, '$');
    // Lazers  bullets = Lazers(0, 0, y, x, '.');
    Enemy   enemies[5];
    while (i < 5)
    {
        enemies[i] = Enemy(0, 0, y, x, '#');
        enemies[i].displayEnemy();
        i++;
    }
    player.setup();
    while (1) {
        i = (i + 1) % 5;
        box(stdscr, '|', '-');
        key = getch();
        player.ft_getInput(key);
        if (player.ft_getInput(key) == 0)
            break;
        // if (key == KEY_UP)
        // {
        //     bullets.ft_moveup();
        // }
        enemies[i].ft_moveDown();
        refresh();
        usleep(80000);
                
    }
    endwin();

    return (0);
}
