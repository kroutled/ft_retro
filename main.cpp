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
    int     key = 0;

    box(stdscr, '*', '*')
    ft_createWindow();
    while (1)
    {
        key = getch();
        ft_checkKey(key);
        refresh();
        endwin();
    }
    endwin();
    return 0;
}
