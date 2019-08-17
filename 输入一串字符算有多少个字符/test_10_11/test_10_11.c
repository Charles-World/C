#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	int ret;
	char board[ROW][COL] = { 0 };

	printf("游戏即将开始，请稍候...\n");
	Initboard(board, ROW, COL);
	Displaygame(board, ROW, COL);
	while (1)
	{
		printf("电脑走:>\n");
		Computermove(board, ROW, COL);
		Displaygame(board, ROW, COL);
		if ((ret = Iswin(board, ROW, COL)) != ' ')
		{
			break;
		}
		printf("玩家走:>\n");
		playermove(board, ROW, COL);
		Displaygame(board, ROW, COL);
		Iswin(board, ROW, COL);
		if ((ret = Iswin(board, ROW, COL)) != ' ')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("电脑胜利\n");
	}
	else if (ret == 'Y')
	{
		printf("玩家胜利\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 2:
				printf("退出游戏中\n");
				break;
			default:
				printf("输入有误，请重新输入。\n");
				break;
			}
	} while (input != 2);
	system("pause");
	return 0;
}