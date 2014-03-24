#include <ncurses.h>

int main() {
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);
  mvprintw(1,0,"q to quit");

  int ch = getch();
  int i = 0;

  while (ch != ERR && ch != 'Q' && ch != 'q') {
    i++;
    if ('\t' == ch)
      // man 3 printf (for a description of the args)
      mvprintw(0,0, "Nr of key presses (%5d): key %6s", i, "Tab");  
    else if ('+' == ch || '=' == ch)
      mvprintw(0,0,"Nr of key presses (%5d): key %6s", i, "Plus");
    else if ('-' == ch || '_' == ch)
      mvprintw(0,0,"Nr of key presses (%5d): key %6s", i, "Minus");
    else
      mvprintw(0,0,"Nr of key presses (%5d): key %6d", i, ch);
    refresh();  // required for actually printing
    ch = getchar();
  }
  endwin();
}
