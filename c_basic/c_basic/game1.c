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
//	//�����������Ϸ
//	//�洢����
//	char board[Row][Col] = { 0 }; //�����ʼ��Ϊ�ո�
//	InitBoard(board, Row, Col);
//	//��ӡ����
//	DisplayBoard(board, Row, Col);
//	//�������·��֣�
//	//��Ϸ�����
//	//1.���Ӯ - '*'
//	//2.����Ӯ - '#'
//	//3.ƽ���� - 'Q'
//	//4.����   - 'C'
//	while (1)
//	{
//		playermove(board, Row, Col);
//		//�ж���Ӯ
//		ret = checkwin(board,Row,Col);
//		if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, Row, Col); 	
//
//		computermove(board, Row, Col);
//		//�ж���Ӯ
//		ret = checkwin(board, Row, Col);
//		if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, Row, Col);      
//	}
//	if (ret == '*')
//	{
//		printf("���Ӯ��\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ��\n");
//	}
//	else if (ret == 'Q')
//	{
//		printf("ƽ��\n");
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
//		printf("��ѡ�� ");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}