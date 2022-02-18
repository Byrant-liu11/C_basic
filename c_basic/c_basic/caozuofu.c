#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>


//不能创建临时变量（第三个变量），实现两个数的交换
//采用异或完成两数值的交换
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a=%d,b=%d\n",a,b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//解法一，有缺陷，仅限正数
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//解法二
//int count_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//解法三
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int ret = count_one(a);
//	printf("%d\n",ret);
//	return 0;
//}



//360公司笔试真题
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}

//下标引用
//arr[10] = {0,1,2,3,4,5,6,7,8,9}
//*(arr+4) == arr[4]
//*(4+arr) == 4[arr]

//结构体
//struct Book
//{
//	char name[50];
//	double price;
//};
//int main()
//{
//	struct Book a = { "深度学习", 103.5 };
//	//结构体变量.成员变量
//	printf("书名为：%s   价格为：%lf\n",a.name,a.price);
//
//	struct Book* b = &a;
//	//结构体指针->成员变量
//	printf("书名为：%s   价格为：%lf\n", b->name, b->price);
//}

//0911作业
//第二题
//int get_diff_pos(int n,int m)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) != ((m >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//第二种方法利用异或解决该问题，因为异或时相同为0，不同为1
//即转变成为求一个数二进制中有多少个1的问题
//int get_diff_pos(int n, int m)
//{
//	int count = 0;
//	int tmp = n^m;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数： ");
//	scanf("%d %d",&a,&b);
//	int count = get_diff_pos(a,b);
//	printf("两数二进制位中不同位的个数为：%d\n",count);
//	return 0;
//}

//第三题
//int main()
//{
//	int n = 0;
//	int i = 0;
//    printf("请输入一个整数： ");
//	scanf("%d",&n);
//	for (i = 1; i <= 32;i+=2)
//	{
//		printf("二进制偶数位为：%d\n", n & 1 << i ? 1 : 0);
//	}
//	for (i = 0; i <= 32; i += 2)
//	{
//		printf("二进制奇数位为：%d\n", n & 1 << i ? 1 : 0);
//	}
//	return 0;
//}

//第四题
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数： ");
//	scanf("%d",&a);
//	int ret = count_one(a);
//	printf("二进制位中1的个数为：%d\n",ret);
//	return 0;
//}

//第五题
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数： ");
//	scanf("%d %d",&a,&b);
//	printf("交换前两个数分别为：%d %d\n",a,b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后两个数分别为：%d %d\n", a, b);
//	return 0;
//