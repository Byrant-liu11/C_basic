//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include"sanziqi.h"
//
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1.play  *******\n");
//	printf("******  0.exit  *******\n");
//	printf("***********************\n");
//}
//void game()
//{
//	char ret = 0;
//	//设计三子棋游戏
//	//存储数据
//	char board[Row][Col] = { 0 }; //数组初始化为空格
//	InitBoard(board, Row, Col);
//	//打印棋盘
//	DisplayBoard(board, Row, Col);
//	//分析以下发现：
//	//游戏情况：
//	//1.玩家赢 - '*'
//	//2.电脑赢 - '#'
//	//3.平局了 - 'Q'
//	//4.继续   - 'C'
//	while (1)
//	{
//		playermove(board, Row, Col);
//		//判断输赢
//		ret = checkwin(board,Row,Col);
//		if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, Row, Col); 	
//
//		computermove(board, Row, Col);
//		//判断输赢
//		ret = checkwin(board, Row, Col);
//		if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, Row, Col);      
//	}
//	if (ret == '*')
//	{
//		printf("玩家赢了\n");
//	}
//	else if (ret == '#')
//	{
//		printf("电脑赢了\n");
//	}
//	else if (ret == 'Q')
//	{
//		printf("平局\n");
//	}
//	DisplayBoard(board, Row, Col);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择： ");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}