#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#include<math.h>


//дһ�����������ҳ����������е����ֵ��
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
//	printf("�ϴ�ֵΪ��%d\n",max);
//	return 0;
//}


//дһ���������Խ����������α��������ݡ�
//
//�β� - ��ʽ����
//��ʵ�δ����βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
//
//a,b����ʽ������x,y��ʵ�ʲ���
//�����
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
//	printf("��������������");
//	scanf("%d %d",&x,&y);
//
//	//������
//	//ʵ�� - ʵ�ʲ���
//	chage(x, y) ;
//	printf("���������Ϊ��%d,%d\n",x,y);
//	return 0;
//}
//��ȷ��
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
//	printf("��������������");
//	scanf("%d %d", &x, &y);
//
//	//������
//	//ʵ�� - ʵ�ʲ���
//	chage(&x, &y);
//	printf("���������Ϊ��%d,%d\n", x, y);
//	return 0;
//}

//дһ�����������ж�һ�����ǲ���������
//int prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;//��������
//		}
//	}
//	return 1;//����
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 1)
//		{
//			printf("����Ϊ%d\n",i);
//		}
//	}
//	return 0;
//}

//дһ�������ж�һ���ǲ������ꡣ
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
//			printf("����Ϊ��%d\n",i);
//		}
//	}
//	return 0;
//}


//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int find(int a[], int left,int right,int num)
//{
//	//���������±������м�Ԫ�ص��±�
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
//	//����-1�����ǵ�left>rightʱ�����Ҳ���
//	return -1;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int n = 0;
//	printf("������Ҫ���ҵ����֣� ");
//	scanf("%d",&n);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); //�����б�ĳ���
//	printf("����ĳ���Ϊ��%d\n",right); //�鿴���鳤��
//
//	//���鴫�ε�ʱ�򣬴��ݵ���������Ԫ�صĵ�ַ
//
//	int sgn = find(arr, left, right,n);
//	if (sgn == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ��sgn = %d", sgn);
//
//	return 0;
//}


//дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
//void fnc(int* a)
//{
//	*a += 1;
//}
//int main()
//{
//	int count = 0;
//	fnc(&count);
//	printf("������%d��\n",count);
//
//	fnc(&count);
//	printf("������%d��\n", count);
//
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	
//	//��MSDN�в鿴printf����ֵ����
//	//�Ӻ���ǰ����һ����ӡ����43���ڶ��������ַ�����2�������������ַ�����1
//	
//	return 0;
//}


//����������ֻҪ��ʹ��ǰ��������
//��add�����������ŵ�ͷ�ļ�add.h�У�������������ŵ�add.c�ļ���
//add.h��add.c��������Ϊһ��ģ��
//�����ĵ���
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("���Ϊ��%d\n",c);
//
//	return 0;
//}

//��һ�ֺ���������ʾ����
//#ifndef __TEST_H__   //���δ����ú���
//#define __TEST_H__   //����
////����������
//int Add(int x, int y);
//#endif //__TEST_H__  //������Ļ���ֱ�ӵ���


//�����ݹ�
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4.
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

//��д��������������ʱ���������ַ����ĳ��ȡ�
//int my_strlen(char* str)
//{
//	int count = 0;  //��������ʱ����
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


//��n�Ľ׳ˡ��������������
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
//	printf("������Ҫ��׳˵�����");
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("���Ϊ��%d\n",ret);
//	return 0;
//}


//���n��쳲����������������������
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
//	printf("������Ҫ��ĵڼ���쳲���������");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("���Ϊ��%d\n",ret);
//	/*printf("count = %d\n",count);*/
//	return 0;
//}

//08.22��ҵ10��ʵ��һ���������ж�һ�����ǲ�����������������ʵ�ֵĺ�����ӡ100��200֮���������
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
//			printf("������%d\n",i);
//	}
//	return 0;
//��ҵ11:ʵ�ֺ����ж�year�ǲ������ꡣ
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
//	printf("������һ����ݣ�");
//	scanf("%d",&n);
//	int ret = dic_run(n);
//	if (ret == 1)
//		printf("�����꣺%d\n", n);
//	else
//		printf("��������");
//	return 0;
//}

//��ҵ12:ʵ��һ��������������������������
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
//	printf("��������������\n");
//	scanf("%d %d",&a,&b);
//    chg(&a, &b); //ע���β���ʵ�ε�����
//	printf("���������Ϊ��%d %d\n",a,b);
//
//	return 0;
//}

//��ҵ13:ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
//	printf("������һ������");
//	scanf("%d",&n);
//	mul_table(n);
//	return 0;
//}


//��ŵ��
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
//	printf("�����뼸����ŵ����");
//	scanf("%d",&n);
//	hnt(n,'A','B','C');
//	return 0;
//}

//������̨��
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
//	printf("С��������̨������");
//	scanf("%d",&n);
//	int ret = frog_jump(n);
//	printf("�ܹ���%d������\n",ret);
//	return 0;
//}