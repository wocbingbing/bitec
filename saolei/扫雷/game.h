#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWS 11
#define COLS 11
#define COL 9
#define ROW 9
#define EASY_COUNT 10
void init_board(char mine[ROWS][COLS], int row, int col, char set); //��ʼ������
void show_board(char show[ROWS][COLS], int row, int col); //��ӡ����
void set_mine(char mine[ROWS][COLS], int row, int col); //������
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col); //�Ų���