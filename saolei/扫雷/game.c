#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void init_board(char mine[ROWS][COLS], int row, int col, char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mine[i][j] = set;
		}
	}
}
void show_board(char show[ROWS][COLS], int row, int col)
{
	int p = 0;
	for (int i = 1; i <= row; i++)
	{
		if (1 == i)
		{
			for (p = 0; p <= row; p++)
			{
				printf("%d ",p);
			}
			printf("\n");
		}
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
}
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if ('0' == mine[x][y])
		{
			mine[x][y] = '1';
			count--;
		}
		
	}
}
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("请输入有效坐标");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= 9) || (y >= 1 && y <= 9))
		{
			if ('1' == mine[x][y])
			{
				printf("很遗憾你被炸死了\n");
				printf("游戏结束\n");
				show_board(mine, ROW, COL);
				break;
			}
			else if ('0' == mine[x][y])
			{
				show[x][y] = get_mine_count(mine, x, y) + '0';
				show_board(show, ROW, COL);
				win++;
			}
		
			

		}
		else
		{
			printf("输入的坐标无效，请重新输入");
		}
		if (win == row * col - EASY_COUNT)
		{
			printf("恭喜你，排雷成功\n");
			show_board(mine, ROW, COL);
			break;
		}
	}
	
}