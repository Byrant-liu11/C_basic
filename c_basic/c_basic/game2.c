//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"saolei.h"
//
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1.play  *******\n");
//	printf("******  0.exit  *******\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	//扫雷游戏主程序
//	//创建两个数组，分别用来存放布置的雷的信息，另一个存放排查出来雷的信息
//	//布置雷的信息
//	char mine[ROWS][COLS] = {0};   //最开始没有雷存放'0'
//	//排查雷的信息
//	char show[ROWS][COLS] = {0};  // 最开始没有排查的位置存放'*'
//	InitBoard(mine, ROWS, COLS,'0');
//	InitBoard(show, ROWS, COLS,'*');
//	DisplayBoard(show, ROW, COL);
//	//雷的信息不应该轻易打印
//	//DisplayBoard(mine, ROW, COL);
//	//1. 布置雷
//	SetMine(mine,ROW,COL);
//	//DisplayBoard(mine, ROW, COL);
//	//2. 扫雷
//	FindMine(mine,show,ROW,COL);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//设置生成随机数的起点
//	do
//	{
//		menu();
//		printf("请选择:> ");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game(); //扫雷游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}