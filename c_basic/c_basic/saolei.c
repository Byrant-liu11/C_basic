//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"saolei.h"
//
//void InitBoard(char board[ROWS][COLS], int rows, int cols,int set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("------------------------------\n");
//	for (i = 0; i <= col; i++)
//	{
//		printf(" %d ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf(" %d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf(" %c ",board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("------------------------------\n");
//}
//
//void SetMine(char board[ROWS][COLS], int row, int col)
//{
//	//��������겼����
//	//�����׵ĸ��� - 10
//	int count = EASY_COUNT;
//	while (count)
//	{
//		//���óɹ�һ����count--;
//		//1. �����������
//		int x = rand() % ROW + 1;//���귶Χ��1-9
//		int y = rand() % COL + 1;//���귶Χ��1-9
//		//������
//		if (board[x][y] == '0')
//		{
//			board[x][y] = '1';
//			count--;
//		}
//	}
//}
//
//
//int GetMineCount(char mine[ROWS][COLS],int x,int y)
//{
//	return mine[x - 1][y] +
//		mine[x - 1][y - 1] +
//		mine[x][y - 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] +
//		mine[x + 1][y + 1] +
//		mine[x][y + 1] +
//		mine[x - 1][y + 1] - 8 * '0';
//}
//
////ɨ����Ϸ������־
////1. ը��
////2. �����Ų������в����׵�λ��
//void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win<ROW*COL - EASY_COUNT)
//	{
//		printf("����������:> ");
//		scanf("%d %d",&x,&y);
//		if (x >= 1 && x <= row && y>=1 && y<=col)
//		{
//			//�ж���x,y���괦�Ƿ�����
//			if (mine[x][y] == '1')
//			{
//				printf("���ź����㱻ը����\n");
//				DisplayBoard(mine, row, col);
//				break;
//			}
//			else
//			{
//				//���x,y���겻���ף���ͳ����Χ�׵ĸ���
//				int count = GetMineCount(mine, x, y);
//				show[x][y] = count + '0';
//				DisplayBoard(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//		{
//			printf("����Ƿ�\n");
//		}
//	}
//	if (win == ROW*COL - EASY_COUNT)
//	{
//		printf("��ϲ�㣬���׳ɹ�����Ӯ��\n");
//		DisplayBoard(mine, row, col);
//	}
//}