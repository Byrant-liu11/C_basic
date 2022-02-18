#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#include<math.h>


//写一个函数可以找出两个整数中的最大值。
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d",&num1,&num2);
//
//	int max = get_max(num1, num2);
//
//	printf("较大值为：%d\n",max);
//	return 0;
//}


//写一个函数可以交换两个整形变量的内容。
//
//形参 - 形式参数
//当实参传给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参
//
//a,b是形式参数，x,y是实际参数
//错误的
//void chage(int a, int b)
//{
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数：");
//	scanf("%d %d",&x,&y);
//
//	//交换后
//	//实参 - 实际参数
//	chage(x, y) ;
//	printf("交换后的数为：%d,%d\n",x,y);
//	return 0;
//}
//正确的
//void chage(int* a, int* b)
//{
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数：");
//	scanf("%d %d", &x, &y);
//
//	//交换后
//	//实参 - 实际参数
//	chage(&x, &y);
//	printf("交换后的数为：%d,%d\n", x, y);
//	return 0;
//}

//写一个函数可以判断一个数是不是素数。
//int prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;//不是素数
//		}
//	}
//	return 1;//素数
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 1)
//		{
//			printf("素数为%d\n",i);
//		}
//	}
//	return 0;
//}

//写一个函数判断一年是不是闰年。
//int leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0)
//		return 1;
//	else if (n % 400 == 0 && n % 3200 != 0)
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (leap_year(i) == 1)
//		{
//			printf("闰年为：%d\n",i);
//		}
//	}
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找。
//int find(int a[], int left,int right,int num)
//{
//	//根据左右下标计算出中间元素的下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < num)
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > num)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//返回-1，就是当left>right时，即找不到
//	return -1;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int n = 0;
//	printf("请输入要查找的数字： ");
//	scanf("%d",&n);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); //计算列表的长度
//	printf("数组的长度为：%d\n",right); //查看数组长度
//
//	//数组传参的时候，传递的是数组首元素的地址
//
//	int sgn = find(arr, left, right,n);
//	if (sgn == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标为：sgn = %d", sgn);
//
//	return 0;
//}


//写一个函数，每调用一次这个函数，就会将num的值增加1。
//void fnc(int* a)
//{
//	*a += 1;
//}
//int main()
//{
//	int count = 0;
//	fnc(&count);
//	printf("调用了%d次\n",count);
//
//	fnc(&count);
//	printf("调用了%d次\n", count);
//
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	
//	//在MSDN中查看printf返回值定义
//	//从后往前，第一个打印的是43，第二个返回字符数量2，第三个返回字符数量1
//	
//	return 0;
//}


//函数声明，只要在使用前声明就行
//将add函数的声明放到头文件add.h中，将函数的主体放到add.c文件中
//add.h与add.c合起来称为一个模块
//函数的调用
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("结果为：%d\n",c);
//
//	return 0;
//}

//另一种函数声明表示方法
//#ifndef __TEST_H__   //如果未定义该函数
//#define __TEST_H__   //则定义
////函数的声明
//int Add(int x, int y);
//#endif //__TEST_H__  //定义过的话，直接调用


//函数递归
//接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);
//
//	print(num);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度。
//int my_strlen(char* str)
//{
//	int count = 0;  //创建了临时变量
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}


//求n的阶乘。（不考虑溢出）
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int fac(int n)
//{
//	if (n < 1)
//		return 1;
//	else
//		return n*fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要求阶乘的数：");
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("结果为：%d\n",ret);
//	return 0;
//}


//求第n个斐波那契数。（不考虑溢出）
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要求的第几个斐波那契数：");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("结果为：%d\n",ret);
//	/*printf("count = %d\n",count);*/
//	return 0;
//}

//08.22作业10：实现一个函数，判断一个数是不是素数。利用上面实现的函数打印100到200之间的素数。
//dic_pri(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (dic_pri(i) == 1)
//			printf("素数：%d\n",i);
//	}
//	return 0;
//作业11:实现函数判断year是不是润年。
//int dic_run(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0)
//		return 1;
//	else if (n % 400 == 0 && n % 3200 != 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个年份：");
//	scanf("%d",&n);
//	int ret = dic_run(n);
//	if (ret == 1)
//		printf("是闰年：%d\n", n);
//	else
//		printf("不是闰年");
//	return 0;
//}

//作业12:实现一个函数来交换两个整数的内容
//void chg(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数：\n");
//	scanf("%d %d",&a,&b);
//    chg(&a, &b); //注意形参与实参的类型
//	printf("交换后的数为：%d %d\n",a,b);
//
//	return 0;
//}

//作业13:实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void mul_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t",j,i,j*i);
//			if (j == i)
//				printf("\n");
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：");
//	scanf("%d",&n);
//	mul_table(n);
//	return 0;
//}


//汉诺塔
//void hnt(int n, char A, char B, char C)
//{
//	if (1 == n)
//	{
//		printf("%c -> %c\n", A, C);
//	}
//	else
//	{
//		hnt(n-1,A,C,B);
//		printf("%c -> %c\n", A, C);
//		hnt(n-1, B, A, C);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入几级汉诺塔：");
//	scanf("%d",&n);
//	hnt(n,'A','B','C');
//	return 0;
//}

//青蛙跳台阶
//int frog_jump(int n)
//{
//	if (1 == n)
//		return 1;
//	else if (2 == n)
//		return 2;
//	else
//		return frog_jump(n - 1) + frog_jump(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("小青蛙跳的台阶数：");
//	scanf("%d",&n);
//	int ret = frog_jump(n);
//	printf("总共有%d种跳法\n",ret);
//	return 0;
//}