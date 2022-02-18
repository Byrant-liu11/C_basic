#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#include<math.h>

//int main()
//{
//	int age = 10;
//	if (age < 16)
//	{
//		printf("少年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 16 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 50 && age < 100)
//	{
//		printf("老年\n");
//	}
//
//	//int age = 10;
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//}
//	//else
//	//{
//	//	printf("成年\n");
//	//}
//
//	return 0;
//}

//测试
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//判断一个数是否为奇数
//int main()
//{
//    //自己编的，有问题，没报错但是结果不对	 --这里的编程思想编程为while循环语句了，而不是if分支语句
//	//int a[10] = { 1, 2, 3, 4, 5, 6 };
//	//int i = 0;
//	//int b = 0;
//	//int c = 0;
//	//if (0 == a[i] % 2)
//	//{
//	//	b = a[i];
//	//	printf("偶数为：%d\n",b);
//	//}
//	//else
//	//{
//	//	c = a[i];
//	//	printf("奇数为：%d\n",c);
//	//}
//	//参考老师
//	//int num;
//	//scanf("请输入一个数：%d\n",num);
//	//if (num % 2 == 1)
//	//{
//	//	printf("奇数%d\n",num);
//	//}
//	//else
//	//{
//	//	printf("偶数：%d\n",num);
//	//}
//	return 0;
//}



//打印1-100以内的奇数
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("奇数为：%d\n",num);
//		}
//		num++;
//	}
//	return 0;
//}


//作业第一题
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}


//多分支语句
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
	//if语句太啰嗦
	//if (1 == day)
	//{
	//	printf("星期1\n");
	//}
	//else if(2 == day)
	//{
	//	printf("星期2\n");
	//}
	//else if (3 == day)
	//{
	//	printf("星期3\n");
	//}
	//else if (4 == day)
	//{
	//	printf("星期4\n");
	//}
	//else if (5 == day)
	//{
	//	printf("星期5\n");
	//}

	//switch语句
	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期天\n");
	//	break;
	//}

	//1-5为工作日
	//6-7为休息日
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;   
//	}
//	return 0;
//}


//练习
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//课堂小练习
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//			if (i == 5)
//				continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//EOF ====> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//while循环处理输入缓冲区的\n
//int main()
//{
//	int ch = 0;
//	char password[30] = {0};
//	printf("请输入密码:> ");
//	scanf("%s", password);
//	//利用while循环处理输入缓冲区的\n，清空缓冲区
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):> ");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}


//for循环变体
//第一种
//int main()
//{
//	//死循环代码
//	//为什么死循环？
//	//当for循环的判断部分省略掉的时候，默认表示恒为真
//	for (;;)
//		printf("haha\n");

	//1
	//int i = 0;
	//int j = 0;
	//int count = 1;
	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j < 10; j++)
	//	{
	//		printf("haha:%d\n",count);
	//	    count++;
	//	}
	//}
	////2
	//int a = 0;
	//int b = 0;
	//int num = 1;
	//for (; a < 10; a++)
	//{
	//	for (; b < 10; b++)
	//	{
	//		printf("hehe:%d\n",num);
	//	    num++;
	//	}
	//}


	////变种2
	//int x, y;
	//for (x = 0, y = 0; x<2 && y<5; ++x, y++)
	//{
	//	printf("hehe\n");
	//}


	//一道笔试题
	//请问循环要循环多少次？
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)    //判断条件为K=0，即赋值，而0为假，所以不循环，直接结束
//	{
//		k++;
//	}
//
//	return 0;
//}


//do while循环
//do
//循环语句；
//while (表达式);
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%dhehe\n",i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//作业题7排大小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数： ");
//	scanf("%d %d %d",&a,&b,&c);
//    if (a>b && a>c && b>c)
//		{
//			printf("%d %d %d",a,b,c);
//		}
//	else if (a>b && a>c && b<c)
//		{
//			printf("%d %d %d",a,c,b);
//		}
//	else if (a<b && a<c && c>b)
//		{
//			printf("%d %d %d",c,b,a);
//		}
//	else if (a>b && a<c && b<c)
//		{
//			printf("%d %d %d",c,a,b);
//		}
//	else if (a<b && c<b && a>c)
//		{
//			printf("%d %d %d", b,a,c);
//		}
//	else if (a<b && c<b && a<c)
//		{
//			printf("%d %d %d", b,c,a);
//		}
//
//	return 0;
//}

//作业题8打印3的倍数
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}


//作业题9最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数： ");
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	while (a%b != 0)
//		{
//			c = a%b;
//			a = b;
//			b = c;
//		}
//	printf("最大公约数：%d\n",b);
//	return 0;
//}

//作业题10闰年
//int main()
//{
//	int a = 0;
//    int count = 0;
//	for (a = 1000; a < 2000; a++)
//	{
//		if (a%4 == 0 && a%100 != 0)
//		{
//			printf("闰年为：%d\n", a);
//			count++;
//		}
//		else if (a % 400 == 0 && a % 3200 != 0)
//		{
//			printf("闰年为：%d\n", a);
//			count++;
//		}
//	}
//	printf("闰年的个数为：%d\n",count);
//	return 0;
//}


//作业题11素数
//int main()
//{
//	int i = 0;
//	int count = 0;//记录素数的个数
//	for (i = 101; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("素数的个数为：%d\n",count);
//	return 0;
//}

//复习(素数)
//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("素数：%d\n", i);
//			count++;
//		}
//	}
//	printf("素数的个数为：%d\n",count);
//	return 0;
//}

//复习
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数：");
//	scanf("%d %d",&a,&b);
//	if (a < b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	while (a%b != 0)
//	{
//		c = a%b;
//	}
//	printf("最大公约数为：%d\n",c);
//	return 0;
//}


//计算n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int res = 1;
//	scanf("%d",&n);
//	/*while (i <= n)
//	{
//		res = res * i;
//		i++;
//	}*/
//	for (i = 1; i <= n; i++)
//	{
//		res = res*i;
//	}
//	printf("结果为：%d\n", res);
//	return 0;
//}


//1!+2!+....+n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int res = 1;//储存阶乘的结果
//	int sum = 0;//储存累加的结果
//	int j = 0;
//	scanf("%d",&n);
//
//	for (i = 1; i <= n; i++)
//	{
//		//res = 1;//每次计算阶乘，都应从1开始
//		//for (j = 1; j <= i; j++)
//		//{
//		//	res *= j;
//		//}
//		//优化
//		res *= i;
//		sum += res;
//	}
//	
//	printf("结果为：%d\n", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 0;
//	printf("请输入要查找的数字：");
//	scanf("%d",&n);

	//普通方法
	
	//int i = 0;

	//for (i = 0; i < 10; i++)
	//{
	//	if (arr[i] == n)
	//	{
	//		printf("找到了\n");
	//		break;
	//	}
	//}
	//if (i == 10)
	//{
	//	printf("找不到");
	//}
	
	//二分法（折半查找法）
	
	/*int left = 0;
	int right = 9;

	根据左右下标计算出中间元素的下标
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid+1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标为：%d\n",mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	return 0;
}*/



//编写代码，演示多个字符从两端移动，向中间汇聚。
//打印 ilove you !!!
//#include<windows.h>
//int main()
//{
//	char arr1[] = "i love you !!!";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr2) - 1; //求出最右边元素的下标
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//延时1000ms，需要引头文件
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;



//}编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char passwords[20] = {0};  //passwords需要设置大小，比如20，不然会提示报错，堆栈问题；注意解决
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s",&passwords);
//		//判断密码正确性 - 比较2个字符串大小关系
//		//strcmp - 函数是用来比较字符串大小关系的
//		//使用该函数所需要的头文件是：string.h
//		if (strcmp(passwords, "021640318") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码不正确，请重新输入");
//		}
//	}
//	if (i == 3)
//	{
//		printf("登陆失败，退出程序\n");
//	}
//	return 0;
//}


//猜数字游戏
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************\n");
//	printf("****  1.play  ***\n");
//	printf("****  0.exit  ***\n");
//	printf("*****************\n");
//}
//void game()
//{
//	int randnum = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入数字：");
//		scanf("%d", &guess);
//		if (guess > randnum)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < randnum)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误,请重新选择\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}


//goto语句
//int main()
//{
//	char input[30] = { 0 };
//	system("shutdown -s -t 120"); //关机时间按秒计算，120秒-2分钟
//again:
//	printf("请注意，你的电脑将在2分钟后关机\n,如果输入：我是猪，就取消关机\n");
//	scanf("%s",&input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//替换goto语句
//int main()
//{
//	char input[30] = { 0 };
//	system("shutdown -s -t 120"); //关机时间按秒计算，120秒-2分钟
//
//	while (1)
//	{
//		printf("请注意，你的电脑将在2分钟后关机,\n 如果输入：我是猪，就取消关机\n");
//		scanf("%s",&input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//作业3
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += pow(-1, i + 1) * 1/i;
//	}
//	printf("sum is:%f\n", sum);
//
//	return 0;
//}

//作业4
//int main()
//{
//	int i = 0;
//	int j = 0;
//	char arr[10] = { 1, 3, 10, 5, 11, 22, 6, 87, 2, 13 };
//	int max = arr[0];  //很容易出现当arr全为负数时，最大值为0，所以对于max的定义应该为数组的第一个元素，避免出现上述情况
//	for (i = 0; i < 10;i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("最大值为：%d\n",max);
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t",j,i,j*i);
//			if (i == j)
//				printf("\n");
//		}
//	}
//		
//	return 0;
//}
