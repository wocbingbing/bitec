#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');
	show_board(show, ROW, COL);
	set_mine(mine, ROW, COL);
	/*show_board(mine, ROW, COL);*/
	find_mine(mine, show, ROW, COL);
}
void menu()
{
	printf("********************\n");
    printf("***** 1.play *******\n");
	printf("***** 0.exit *******\n");
	printf("********************\n");
}
int main()
{
	
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏");
			break;
		case 1:
			printf("开始游戏\n");
			game();

				break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		
	} while (input);
	return 0;
}