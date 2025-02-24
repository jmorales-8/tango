#include <ncurses.h>

int main(int argc, char** argv)
{
    initscr();
    printw("My first ncurses");
    refresh();
    getch();
    endwin();

    return 0;
}
