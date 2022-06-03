#include <ncurses.h>

int main()
{   int ch;

    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    printw("type in whatever to see it in bold");
    ch = getch();

    if(ch == KEY_F(1))
        printw("F1 Key pressed");

    else
    {   printw("You pressed ");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }
    refresh();
    getch();
    endwin();

    return 0;
}
