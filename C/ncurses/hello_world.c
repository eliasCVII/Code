#include <ncurses.h>

int main()
{
    initscr();
    printw("Hello World Nigga");
    refresh();
    getch();
    endwin();

    return 0;
}
