#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	int ret;
	char board[ROW][COL] = { 0 };

	printf("��Ϸ������ʼ�����Ժ�...\n");
	Initboard(board, ROW, COL);
	Displaygame(board, ROW, COL);
	while (1)
	{
		printf("������:>\n");
		Computermove(board, ROW, COL);
		Displaygame(board, ROW, COL);
		if ((ret = Iswin(board, ROW, COL)) != ' ')
		{
			break;
		}
		printf("�����:>\n");
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
		printf("����ʤ��\n");
	}
	else if (ret == 'Y')
	{
		printf("���ʤ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 2:
				printf("�˳���Ϸ��\n");
				break;
			default:
				printf("�����������������롣\n");
				break;
			}
	} while (input != 2);
	system("pause");
	return 0;
}