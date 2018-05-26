#include <iostream>
#include <ncurses.h>

//function used to set up the window that the game is in
void    ft_createWindow(void)
{
    initscr();  //switches terminal to curses mode
    cbreak();   //allows signals to be used i.e cntrl Z
    noecho();   //stops charecter input from displaying
    keypad(stdscr, TRUE);   //allows input of keypad and Fkeys
    box(stdscr, '*', '-');  //generates box border
    refresh();  //spits out contents of window to the console
    getch();    //waits for user input
    endwin();   //clears terminal of curses mode and frees memory
}

int main(void)
{
    ft_createWindow();
    return 0;
}