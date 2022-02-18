//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"sanziqi.h"
//
//void InitBoard(char board[Row][Col], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
////void DisplayBoard(char board[Row][Col], int row, int col)
////{
////	int i = 0;
////	for (i = 0; i < row; i++)
////	{
////		//打印数据
////		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);  //%c那个位置将代码写死，只能生成三列，不能够随机应变
////
////		//打印分割行
////		if (i < row - 1)
////		{
////			printf("---|---|---\n");
////		}
////	}
////}
//
//void DisplayBoard(char board[Row][Col], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印数据
//		int j = 0;
//		for (j = 0; j < col - 1; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//
//		//打印分割行
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//		}
//		printf("\n");
//	
//	}
//}
//	
//
//void playermove(char board[Row][Col], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家走->\n");
//
//	while (1)
//	{
//		printf("请输入坐标：");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("该坐标被占用，请重新输入\n");
//			}
//		}
//		else
//		{
//			printf("坐标非法，请重新输入\n");
//		}
//	}
//}
//
//
//void computermove(char board[Row][Col], int row, int col)
//{
//	printf("电脑走->\n");
//
//	while (1)
//	{
//		int x = rand() % row;
//		int y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//
//static int is_full(char board[Row][Col], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return 1; //没空格
//}
//
//
//
//char checkwin(char board[Row][Col], int row, int col)
//{
//	int i = 0;
//	//行是否有三个相等
//	for (i = 0; i < row; i++)
//	{
//		//checkwin这个函数只能判断三行三列，一旦改了行和列，即不可用，因为下面在判断部分将代码写死
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
//		{
//			return board[i][0];
//		}
//	}
//	//列是否有三个相等
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
//		{
//			return board[0][i];
//		}
//	}
//	//对角线三个相等
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
//	{
//		return board[1][1];
//	}
//	//判断是否为平局
//	//判断棋盘是否满了？-棋盘是否有空格？
//	if (is_full(board, row, col) == 1)
//	{
//		return 'Q';
//	}
//	//不是平局
//	return 'C';
//}