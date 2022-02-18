#define _CRT_SECURE_NO_WARNINGS 1
//第一句解决的是VS编译器认为不安全的函数：scanf/strcpy/strcat
//头文件
//stdio
//std -标准
//i -input
//o -output 
//标准的输入输出
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//%d -打印整形
//%s -打印字符串
//%c -打印字符

//一个C语言中必须包含一个main函数-主函数
//int main()
//{   
//	//大括号括起来的为函数主体
//	//库函数，C语言本身提供函数  -引入头文件
//	printf("Hello\n");
//	printf("hello\n");
//	return 0;  //与int对应
//
//}
//int main()
//{   
//	printf("hello\n");
//	printf("hello\n");
//	return 0;
//}
//scanf:输入
//printf:输出
//int main()
//{
//	int num = 0;   //创建一个整型变量并赋值
//	scanf("%d",&num);   //输入整型数据，%d输入整型数据
//	printf("%d",num);   //输出一个整数
//	return 0;
//}
//int main()
//{
//	//C语言中的一个关键字
//	//sizeof(类型)-计算类型创建变量所开辟空间的大小,计算的大小单位是字节
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(long));
//	//标准规定：sizeof(long) >= sizeof(int)
//	printf("%d\n",sizeof(long long));
//	//sizeof(long long) >= sizeof(long)
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	return 0;
//}
//变量
//int main()
//{
//	int age = 10;
//	float weight = 37.5;
//	char ch = 'a';
//
//	int salary = 100000;
//
//	return 0;
//}
//全局变量
//int a = 10;
//
//int main()
//{
//	int a =5;   //局部变量
//	printf("%d\n",a);  //当全局变量与局部变量变量名相同时，局部变量优先
//	return 0;
//}

//加法
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum;
//	printf("请输入两个整数：");
//	scanf("%d %d",&num1,&num2);
//	sum = num1 + num2;
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//字面常量
//	/*100;
//	'a';
//	3.14;
//	return 0;*/
//	const int num = 10;  //const修饰的常变量不可改变,常变量，是变量，但不可修改
//	printf("%d\n",num);
//	//num = 20; //所以这里会报错
//	printf("%d\n",num);
//	return 0; 
//}

////#define定义的常量
//#define NUM 100
//int main()
//{
//	//NUM = 200;//NUM为#define定义的常量，不可修改，所以会报错
//	printf("打印结果：%d\n",NUM);
//	return 0;
//}

//枚举常量
//枚举：一一列举
//enum Sex
//{
//	//枚举类型Sex的三个可能取值 -枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex sex = FEMALE;
//	//MALE = 2;枚举常量不可修改，只能在枚举定义的里面改
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}

//字符串
//#include<string.h>;
//int main()
//{
//	//sizeof()计算机所占用空间的大小，包括\0
//	//strlen()只求字符串长度，结束标志为\0，但不包括\0
//	char arr1[] = "abc";//默认存在'\0'停止标志
//	char arr2[] = {'a','b','c'};
//	char arr3[] = {'a','b','c','\0'};//'\0'为停止的结束标志，在计算字符串长度时，'\0'为结束标志，不算作字符串内容
//	//%s，是打印字符串
//	printf("%s\n",arr1);
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",sizeof(arr1));//计算大小的时候包含'\0'，所以大小为4
//
//	printf("%s\n",arr2);
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",sizeof(arr2));
//
//	printf("%s\n",arr3);
//	printf("%d\n",strlen(arr3));
//	printf("%d\n",sizeof(arr3));//计算大小的时候包含'\0'，所以大小为4
//
//	return 0;
//}

//转义字符
//int main()
//{
//	//printf("c:\code\test.c");
//	printf("c:\\code\\test.c");
//	printf("hehe\n");//\n为一种转义字符
//	printf("%c\n",'\132');//\ddd表示1~3个8进制数字
//	//16进制数字
//	//0-9,ABCDEF
//	printf("%c\n",'\x5F');//\xdd表示十六进制数字
//	return 0;
//}

//面试考试例题
//程序输出什么？
//#include <stdio.h>
//int main()
//{
//printf("%d\n", strlen("abcdef"));
//// \32被解析成一个转义字符
//printf("%d\n", strlen("c:\test\328\test.c"));//\t算一个，\32算一个，8单独算一个
//return 0;
//}


////if语句
//int main()
//{
//	char input = 'N';
//	printf("好好学习（Y/N）\n");
//	scanf("%c",&input);
//	if(input == 'Y')
//	{
//		printf("好工作\n");
//	
//	}
//	else
//	{
//		printf("回家\n");
//	
//	}
//
//	return 0;
//}



//while循环
//int line;
//int main()
//{
//	printf("好好学习\n");
//	line = 0;
//	while(line < 2000)
//	{
//		printf("继续学习:%d\n",line);
//		line++;
//	}
//	if(line >= 2000)
//	{
//		printf("好工作\n");
//	}
//
//	return 0;
//}


//函数
//int add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum;
//	printf("请输入两个整数：");
//	scanf("%d %d",&num1,&num2);
//	sum = add(num1,num2);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}


//作业
//int main()
//{
//	int a ;
//	int b ;
//	printf("请输入两个整数：\n");
//	scanf("%d %d",&a,&b);
//	if(a > b)
//	{
//		printf("输出较大值%d\n",a);
//	}
//	else
//	{
//	    printf("输出较大值%d\n",b);
//	}
//
//	return 0;
//}
//修改,构建函数，使代码具有通用性
//声明函数
//int get_max(int x,int y)
//{
//	int z;
//	if(x>y)
//	{
//		z=x;
//	}
//	else
//	{
//		z=y;
//	}
//	return z;
//}
//int main()
//{
//	int a;
//	int b;
//	int max;
//	scanf("%d %d",&a,&b);
//	max=get_max(a,b);
//	printf("最大值为：%d\n",max);
//	return 0;
//}


//数组
//int main()
//{
//	//初始化数组的前5个，剩下的5个元素都为0；最多放10个元素；数组的第一个下标从0开始；
//	int arr[10] = {1,2,3,4,5};
//
//	int i = 0;
//	while(i < 10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//赋值操作符
//= += -= *= /= &= ^= |= >>= <<=
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//a = a + 5;
//	a += 5;       //a = a + 5 等价于 a += 5
//	printf("%d\n",a);
//	//b = b - 5;
//	b -= 5;       //b = b - 5 等价于 b -= 5
//	printf("%d\n",b);
// 
//	return 0;
//}


//单目操作符
//C语言区分真假
//0 -表示假
//非0 -表示真
//int main()
//{
	//int a = 10;
	//int b = 0;
	//printf("%d\n",a);
	//printf("%d\n",!a);  //!逻辑反操作
	//printf("%d\n",b);
	//printf("%d\n",!b);

	//int a = 10;
	//char b = 'w';
	////sizeof 是一个操作符
	////sizeof 计算的是变量所占用内存空间的大小（单位：字节）
	//printf("%d\n",sizeof(a)); //int -4个字节
	//printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof(b)); //char -1个字节
	//printf("%d\n",sizeof(char));


	//int a = -1;
	//将十进制的数字转换为二进制
	//二进制有三种表示形势：原码、反码、补码
	//二进制位中最高位是符号位
	//最高位是1，表示负数
	//最高位是0，表示正数
	//10000000000000000000000000000001 -原码
	//11111111111111111111111111111110 -反码：最高位不变，其他位取反
	//11111111111111111111111111111111 -补码：反码+1
	//
	//整数在内存中存储的是二进制表示的补码
	//
	//正整数的原码、反码、补码相同

	/*int a = 0;*/
	//
	//00000000000000000000000000000000 -原码=反码=补码（正整数）
	//11111111111111111111111111111111 -补码
	//11111111111111111111111111111110 -反码
	//10000000000000000000000000000001 -原码（取反后的原码）
	//printf("%d\n",~a);// ~对一个数的二进制按位取反

	//前置++
	//int a = 10;
	//int c = 10;
	//int b = ++a;//前置++，先给a的值+1，再给b赋值，前置--用法相同
	//int d = c++;//后置++，先给d赋值，再给a的值+1，后置--用法相同
	//printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);


	//int a = (int)3.14;//强制转换为int，（类型）-强制类型转换
	//printf("%d\n",a);
	
	//三目操作符
	//exp1 ? exp2 : exp3
	//int a = 10;
	//int b = 20;
	//int max = 0;

	//if (a > b)
	//{
	//	max = a;
	//}
	//else
	//{
	//	max = b;
	//}
	//max = (a>b ? a : b);//上面的if语句就是等价于下面这个三目操作语句
	//printf("%d\n",max);

	//return 0;
//}



//void test()
//{
//	static int a = 1; 
//	/*int a = 1; *///a为局部变量，出范围就结束
//	a++;
//	printf("%d",a);
//}
//int main()
//{
//	int i = 0;
//
//	//循环执行10次
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//作业
//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++) 
//    { 
//        printf("%d,", sum(a)); 
//    } 
//}

//#define定义常量和宏
//常量
//#define max 100
//int main()
//{
//	int a = max;
//	printf("%d\n",a);
//	return 0;
//}
//宏
//#define ADD(x,y) ((x) + (y))
//int main()
//{
//	int sum = ADD(3,5);
//	printf("%d\n",sum);
//	return 0;
//}



//指针
//int main()
//{
//	//int a = 100;//创建变量a，要向内存申请4字节的空间
//	//&a;//&去地址操作符
//	//printf("%p\n",&a);//%p,打印地址，16进制
//
//	//char ch = 'w';
//	//char* p = &ch;
//	/*printf("%p\n",&p);*/
//
//	/*double c = 3.14;
//	double* pd = &c;*/
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 11; //* -解引用操作符
//	printf("%d\n",a);
//	return 0;
//}

//结构体
//学生类型
//struct Stu
//{
//	char name[20];//名字，20给的是空间大小
//	short age;//年龄
//};
//int main()
//{
//	struct Stu s1 = {"张三",30};//s1为学生的变量
//	printf("name=%s age=%d\n",s1.name,s1.age);
//	struct Stu* ps = &s1;
//	printf("%s %d\n",ps->name,ps->age);  //操作符：.-结构体的成员； -> -结构体指针，指向结构体成员
//	return 0;
//}