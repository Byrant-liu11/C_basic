#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>


//���ܴ�����ʱ��������������������ʵ���������Ľ���
//��������������ֵ�Ľ���
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

//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ�����
//�ⷨһ����ȱ�ݣ���������
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
//�ⷨ��
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
//�ⷨ��
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



//360��˾��������
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}

//�±�����
//arr[10] = {0,1,2,3,4,5,6,7,8,9}
//*(arr+4) == arr[4]
//*(4+arr) == 4[arr]

//�ṹ��
//struct Book
//{
//	char name[50];
//	double price;
//};
//int main()
//{
//	struct Book a = { "���ѧϰ", 103.5 };
//	//�ṹ�����.��Ա����
//	printf("����Ϊ��%s   �۸�Ϊ��%lf\n",a.name,a.price);
//
//	struct Book* b = &a;
//	//�ṹ��ָ��->��Ա����
//	printf("����Ϊ��%s   �۸�Ϊ��%lf\n", b->name, b->price);
//}

//0911��ҵ
//�ڶ���
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
//�ڶ��ַ�����������������⣬��Ϊ���ʱ��ͬΪ0����ͬΪ1
//��ת���Ϊ��һ�������������ж��ٸ�1������
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
//	printf("�������������� ");
//	scanf("%d %d",&a,&b);
//	int count = get_diff_pos(a,b);
//	printf("����������λ�в�ͬλ�ĸ���Ϊ��%d\n",count);
//	return 0;
//}

//������
//int main()
//{
//	int n = 0;
//	int i = 0;
//    printf("������һ�������� ");
//	scanf("%d",&n);
//	for (i = 1; i <= 32;i+=2)
//	{
//		printf("������ż��λΪ��%d\n", n & 1 << i ? 1 : 0);
//	}
//	for (i = 0; i <= 32; i += 2)
//	{
//		printf("����������λΪ��%d\n", n & 1 << i ? 1 : 0);
//	}
//	return 0;
//}

//������
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
//	printf("������һ������ ");
//	scanf("%d",&a);
//	int ret = count_one(a);
//	printf("������λ��1�ĸ���Ϊ��%d\n",ret);
//	return 0;
//}

//������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("�������������� ");
//	scanf("%d %d",&a,&b);
//	printf("����ǰ�������ֱ�Ϊ��%d %d\n",a,b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("�������������ֱ�Ϊ��%d %d\n", a, b);
//	return 0;
//