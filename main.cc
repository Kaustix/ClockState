#include <ncurses.h>
#include "Clock.h"

int main() {
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);
  
  Clock* c = new Clock();
  mvprintw(0,0, c->display().c_str());
  mvprintw(1,0,"q to quit");

  int ch = getch();
  int i = 0;

  while (ch != ERR && ch != 'Q' && ch != 'q') {
    i++;
    if ('\t' == ch) {
      c->mode();
    }
    else if ('+' == ch || '=' == ch) {
      c->inc();
    }
    else if ('-' == ch || '_' == ch) {
      c->dec();
    }
    
    move(0, 0);
    clrtoeol();
    mvprintw(0,0, c->display().c_str());
    refresh();
    ch = getchar();
  }

  endwin();

  delete c;

  return 0;
}
