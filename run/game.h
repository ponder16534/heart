#define ROW 3
#define COL 3
//声明
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL],int row,int col);//这时候形参写成小写
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//四种游戏状态
//玩家赢 '*'
//电脑赢 '#'
//平局   'Q'
//继续   'C'
char IsWin(char board[ROW][COL], int row, int col);
