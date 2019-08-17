#ifndef __game_h__
#define __game_h__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void game();
void menu();
void Displaygame(char board[ROW][COL], int row, int col);
void Initboard(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);

#endif 
