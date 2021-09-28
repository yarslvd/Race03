#include "../inc/header.h"

void mx_print_message()
{
    initscr();
    mx_initcolor();
    char *line1 = "Wake up , Neo..";
    char *line2 = "The Matrix has you..";
    char *line3 = "Follow the white rabbit";
    char *line4 = "Knock, knock, Neo";
    refresh();

    for(unsigned int i = 0; i < mx_strlen(line1); i++){        
        mvaddch(5, i + 4, line1[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    refresh();
    for(unsigned int i = 0; i < mx_strlen(line2); i++){
        mvaddch(5, i + 4, line2[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    refresh();
    for(unsigned int i = 0; i < mx_strlen(line3); i++){      
        mvaddch(5, i + 4, line3[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    refresh();
    for(unsigned int i = 0; i < mx_strlen(line4); i++){      
        mvaddch(5, i + 4, line4[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    
    refresh();
    endwin();
}
