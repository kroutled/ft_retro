#include <iostream>
#include <ncurses.h>

//function used to set up the window that the game is in
void    ft_createWindow(void)
{
    initscr();  //switches terminal to curses mode
    cbreak();   //allows signals to be used i.e cntrl Z
    noecho();   //stops charecter input from displaying
    keypad(stdscr, TRUE);   //allows input of keypad and Fkeys
    curs_set(0);    //sets the cursor to invisible so that we cant see it in window
    box(stdscr, '*', '-');  //generates box border
}

int main(void)
{
    ft_createWindow();
    while (1)
    {
        getch();
        refresh();
        return (0);
    }
    endwin();
    return 0;
}