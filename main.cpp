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
#include "Entity.hpp"

//function used to set up the window that the game is in
void    ft_createWindow(void)
{
    initscr();              //switches terminal to curses mode
    cbreak();               //allows signals to be used i.e cntrl Z
    noecho();               //stops charecter input from displaying
    keypad(stdscr, TRUE);   //allows input of keypad and Fkeys
    curs_set(0);            //sets the cursor to invisible so that we cant see it in window
}

int main(void)
{   
    int w, h = 0;
    getmaxyx(stdscr, h, w);
    Entity body = Entity(0, 0, h, w);

    return 0;
}
