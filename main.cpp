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


#include "Entity.hpp"
#include "Enemy.hpp"
#include "Ship.hpp"
#include "Lazers.hpp"
#include "Game.hpp"
#include <cmath>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
  #include <ctime>


#define GREEN_BLACK 1

void    ft_createWindow(void)
{
    initscr();              
    cbreak();               
    noecho();               
    keypad(stdscr, TRUE);   
    curs_set(0);            
    nodelay(stdscr, TRUE);
}

int     main(void){

    

    Game        *game = NULL;
    int         c;
    std::string str;
    const char  *name;
    
    srand(time(NULL));
    int x = 0;
    int y = 0;
    int key = 0;
    int i = 0;
    int run = 1;

    std::cout << "ENTER YOUR NAME: ";
    std::cin >> str;

    name = str.c_str();

    ft_createWindow();

    start_color();
    init_pair(GREEN_BLACK, COLOR_GREEN, COLOR_BLACK);

    do{ 
        clear();
        game->launchGame(name);
        refresh();

        if ((c = getch()) == 's' || (c = getch()) == 'S'){
            while ((c = getch()) != 27){
                clear();
                game->rules();
                refresh(); 

                if ((c = getch()) == 's' || (c = getch()) == 'S'){
                    clear();
                    refresh();
                    getmaxyx(stdscr, y, x);


                    Ship    player = Ship(0, 0, x, y, 'T');
                    Enemy   *enemies[5];
                    Lazers  *bullets = NULL;

                    while (i < 5)
                    {
                        enemies[i] = new Enemy(0, 0, x, y, 'O');
                        enemies[i]->displayEnemy();
                        i++;
                    }

                    player.setup();
                    
                    while (run == 1) {
                        clock_t milisecs = clock();
                        mvprintw(1, 6, "\t\t\t\tPLAYER: %s \t LIVES: %d \t SCORE: %d \t TIME: %f ", name, 1, player.getScore(), (float)milisecs/(60*60*2));
                        milisecs = clock();
                        wbkgd(stdscr, COLOR_PAIR(GREEN_BLACK));
                        i = (i + 1) % 5;
                        char wall[] = {'\\', '/'};
                        box(stdscr, wall[rand() % 2] , wall[rand() % 2]);
                        key = getch();
                        player.ft_getInput(key);
                        if (player.ft_getInput(key) == 0)
                            run = 0;
                            
                        if (key == KEY_UP && bullets == NULL)
                        {   
                            bullets = new Lazers(0, 0, x, y, '.');
                            bullets->placeBullet(player.getY(), player.getX());
                        }

                        if (bullets)
                        {
                            bullets->ft_moveUp();
                            int j = 0;
                            while (j < 5)
                            {
                                refresh();
                                if (enemies[j]->getX() == bullets->getX() && enemies[j]->getY() == bullets->getY())
                                {
                                    delete enemies[j];
                                    enemies[j] = new Enemy(0, 0, x, y, 'O');
                                    enemies[j]->displayEnemy();
                                    player.setScore(10);
                                    mvaddch(bullets->getY(), bullets->getX(), ' ');
                                    delete bullets;
                                    bullets = NULL;              
                                    break;
                                }
                                if (bullets->getY() == 1)
                                {
                                    mvaddch(bullets->getY(), bullets->getX(), ' ');
                                    delete bullets;
                                    bullets = NULL;       
                                    break;
                                }
                                j++;
                            }   

                        }
                        enemies[i]->ft_moveDown();
                        int k = 0;
                        while (k < 5)
                        {
                            if (enemies[k]->getY() == (y - 2))
                                run = 0;
                            k++;   
                        }
                        if (enemies[i]->getY() == player.getY())
                            endwin();
                        refresh();
                        usleep(80000);
                    }
                    delete bullets;
                    bullets = NULL;
                    break;
                }   
                run=1;
            }
        }
        
    }while ((c = getch()) != 27);
    
    

    endwin();
}
