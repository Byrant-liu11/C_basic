#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#include<math.h>

//int main()
//{
//	char ch1[] = {'a','b','c','d'};
//	char ch2[] = "abcd";
//	printf("%d\n",sizeof(ch1));
//	printf("%d\n",sizeof(ch2));
//	printf("%d\n",strlen(ch1));
//	printf("%d\n",strlen(ch2));
//	return 0;
//}

//二维数组
//索引
//int main()
//{
	//二维数组初始化，行数可以省略不填，但列数不能省略
	//int arr[3][4] = { { 1, 2 }, { 3, 4 }, {5} };
	//int i = 0;//行
	//int j = 0;//列
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ",arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//打印地址
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int i = 0;//行
//	int j = 0;//列
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]  = %p\n",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//冒泡排序,升序排列
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr,sz);
//
//	bubble_sort(arr,sz);
//
//	print_arr(arr,sz);
//
//	return 0;
//}


//二维数组遍历
//void print_arr(int arr[3][4], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	print_arr(arr,3,4);
//	return 0;
//}