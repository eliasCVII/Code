#include <ncurses.h>

int main(void)
{
    initscr();
    addstr("Goodbya, cruel C programming!");
    refresh();
    getch();

    endwin();
    return 0;
}
