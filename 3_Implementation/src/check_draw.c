/**
 * @file check_draw.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "game_operations.h"
int check_draw(int turn)
{
    if(turn > 9)
    {
        //gotoxy(30,20);
        //textcolor(128+RED);
        printf("\n\n Game Draw");
        getch();
        exit(0);
    }
    return 1;
}