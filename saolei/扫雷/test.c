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
			printf("�˳���Ϸ");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game();

				break;
		default:
			printf("�����������������\n");
			break;
		}
		
	} while (input);
	return 0;
}