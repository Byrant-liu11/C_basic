#define _CRT_SECURE_NO_WARNINGS 1
//��һ��������VS��������Ϊ����ȫ�ĺ�����scanf/strcpy/strcat
//ͷ�ļ�
//stdio
//std -��׼
//i -input
//o -output 
//��׼���������
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//%d -��ӡ����
//%s -��ӡ�ַ���
//%c -��ӡ�ַ�

//һ��C�����б������һ��main����-������
//int main()
//{   
//	//��������������Ϊ��������
//	//�⺯����C���Ա����ṩ����  -����ͷ�ļ�
//	printf("Hello\n");
//	printf("hello\n");
//	return 0;  //��int��Ӧ
//
//}
//int main()
//{   
//	printf("hello\n");
//	printf("hello\n");
//	return 0;
//}
//scanf:����
//printf:���
//int main()
//{
//	int num = 0;   //����һ�����ͱ�������ֵ
//	scanf("%d",&num);   //�����������ݣ�%d������������
//	printf("%d",num);   //���һ������
//	return 0;
//}
//int main()
//{
//	//C�����е�һ���ؼ���
//	//sizeof(����)-�������ʹ������������ٿռ�Ĵ�С,����Ĵ�С��λ���ֽ�
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(long));
//	//��׼�涨��sizeof(long) >= sizeof(int)
//	printf("%d\n",sizeof(long long));
//	//sizeof(long long) >= sizeof(long)
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	return 0;
//}
//����
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
//ȫ�ֱ���
//int a = 10;
//
//int main()
//{
//	int a =5;   //�ֲ�����
//	printf("%d\n",a);  //��ȫ�ֱ�����ֲ�������������ͬʱ���ֲ���������
//	return 0;
//}

//�ӷ�
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum;
//	printf("����������������");
//	scanf("%d %d",&num1,&num2);
//	sum = num1 + num2;
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//���泣��
//	/*100;
//	'a';
//	3.14;
//	return 0;*/
//	const int num = 10;  //const���εĳ��������ɸı�,���������Ǳ������������޸�
//	printf("%d\n",num);
//	//num = 20; //��������ᱨ��
//	printf("%d\n",num);
//	return 0; 
//}

////#define����ĳ���
//#define NUM 100
//int main()
//{
//	//NUM = 200;//NUMΪ#define����ĳ����������޸ģ����Իᱨ��
//	printf("��ӡ�����%d\n",NUM);
//	return 0;
//}

//ö�ٳ���
//ö�٣�һһ�о�
//enum Sex
//{
//	//ö������Sex����������ȡֵ -ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex sex = FEMALE;
//	//MALE = 2;ö�ٳ��������޸ģ�ֻ����ö�ٶ���������
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}

//�ַ���
//#include<string.h>;
//int main()
//{
//	//sizeof()�������ռ�ÿռ�Ĵ�С������\0
//	//strlen()ֻ���ַ������ȣ�������־Ϊ\0����������\0
//	char arr1[] = "abc";//Ĭ�ϴ���'\0'ֹͣ��־
//	char arr2[] = {'a','b','c'};
//	char arr3[] = {'a','b','c','\0'};//'\0'Ϊֹͣ�Ľ�����־���ڼ����ַ�������ʱ��'\0'Ϊ������־���������ַ�������
//	//%s���Ǵ�ӡ�ַ���
//	printf("%s\n",arr1);
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",sizeof(arr1));//�����С��ʱ�����'\0'�����Դ�СΪ4
//
//	printf("%s\n",arr2);
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",sizeof(arr2));
//
//	printf("%s\n",arr3);
//	printf("%d\n",strlen(arr3));
//	printf("%d\n",sizeof(arr3));//�����С��ʱ�����'\0'�����Դ�СΪ4
//
//	return 0;
//}

//ת���ַ�
//int main()
//{
//	//printf("c:\code\test.c");
//	printf("c:\\code\\test.c");
//	printf("hehe\n");//\nΪһ��ת���ַ�
//	printf("%c\n",'\132');//\ddd��ʾ1~3��8��������
//	//16��������
//	//0-9,ABCDEF
//	printf("%c\n",'\x5F');//\xdd��ʾʮ����������
//	return 0;
//}

//���Կ�������
//�������ʲô��
//#include <stdio.h>
//int main()
//{
//printf("%d\n", strlen("abcdef"));
//// \32��������һ��ת���ַ�
//printf("%d\n", strlen("c:\test\328\test.c"));//\t��һ����\32��һ����8������һ��
//return 0;
//}


////if���
//int main()
//{
//	char input = 'N';
//	printf("�ú�ѧϰ��Y/N��\n");
//	scanf("%c",&input);
//	if(input == 'Y')
//	{
//		printf("�ù���\n");
//	
//	}
//	else
//	{
//		printf("�ؼ�\n");
//	
//	}
//
//	return 0;
//}



//whileѭ��
//int line;
//int main()
//{
//	printf("�ú�ѧϰ\n");
//	line = 0;
//	while(line < 2000)
//	{
//		printf("����ѧϰ:%d\n",line);
//		line++;
//	}
//	if(line >= 2000)
//	{
//		printf("�ù���\n");
//	}
//
//	return 0;
//}


//����
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
//	printf("����������������");
//	scanf("%d %d",&num1,&num2);
//	sum = add(num1,num2);
//	printf("%d\n",sum);
//	system("pause");
//	return 0;
//}


//��ҵ
//int main()
//{
//	int a ;
//	int b ;
//	printf("����������������\n");
//	scanf("%d %d",&a,&b);
//	if(a > b)
//	{
//		printf("����ϴ�ֵ%d\n",a);
//	}
//	else
//	{
//	    printf("����ϴ�ֵ%d\n",b);
//	}
//
//	return 0;
//}
//�޸�,����������ʹ�������ͨ����
//��������
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
//	printf("���ֵΪ��%d\n",max);
//	return 0;
//}


//����
//int main()
//{
//	//��ʼ�������ǰ5����ʣ�µ�5��Ԫ�ض�Ϊ0������10��Ԫ�أ�����ĵ�һ���±��0��ʼ��
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


//��ֵ������
//= += -= *= /= &= ^= |= >>= <<=
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//a = a + 5;
//	a += 5;       //a = a + 5 �ȼ��� a += 5
//	printf("%d\n",a);
//	//b = b - 5;
//	b -= 5;       //b = b - 5 �ȼ��� b -= 5
//	printf("%d\n",b);
// 
//	return 0;
//}


//��Ŀ������
//C�����������
//0 -��ʾ��
//��0 -��ʾ��
//int main()
//{
	//int a = 10;
	//int b = 0;
	//printf("%d\n",a);
	//printf("%d\n",!a);  //!�߼�������
	//printf("%d\n",b);
	//printf("%d\n",!b);

	//int a = 10;
	//char b = 'w';
	////sizeof ��һ��������
	////sizeof ������Ǳ�����ռ���ڴ�ռ�Ĵ�С����λ���ֽڣ�
	//printf("%d\n",sizeof(a)); //int -4���ֽ�
	//printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof(b)); //char -1���ֽ�
	//printf("%d\n",sizeof(char));


	//int a = -1;
	//��ʮ���Ƶ�����ת��Ϊ������
	//�����������ֱ�ʾ���ƣ�ԭ�롢���롢����
	//������λ�����λ�Ƿ���λ
	//���λ��1����ʾ����
	//���λ��0����ʾ����
	//10000000000000000000000000000001 -ԭ��
	//11111111111111111111111111111110 -���룺���λ���䣬����λȡ��
	//11111111111111111111111111111111 -���룺����+1
	//
	//�������ڴ��д洢���Ƕ����Ʊ�ʾ�Ĳ���
	//
	//��������ԭ�롢���롢������ͬ

	/*int a = 0;*/
	//
	//00000000000000000000000000000000 -ԭ��=����=���루��������
	//11111111111111111111111111111111 -����
	//11111111111111111111111111111110 -����
	//10000000000000000000000000000001 -ԭ�루ȡ�����ԭ�룩
	//printf("%d\n",~a);// ~��һ�����Ķ����ư�λȡ��

	//ǰ��++
	//int a = 10;
	//int c = 10;
	//int b = ++a;//ǰ��++���ȸ�a��ֵ+1���ٸ�b��ֵ��ǰ��--�÷���ͬ
	//int d = c++;//����++���ȸ�d��ֵ���ٸ�a��ֵ+1������--�÷���ͬ
	//printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);


	//int a = (int)3.14;//ǿ��ת��Ϊint�������ͣ�-ǿ������ת��
	//printf("%d\n",a);
	
	//��Ŀ������
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
	//max = (a>b ? a : b);//�����if�����ǵȼ������������Ŀ�������
	//printf("%d\n",max);

	//return 0;
//}



//void test()
//{
//	static int a = 1; 
//	/*int a = 1; *///aΪ�ֲ�����������Χ�ͽ���
//	a++;
//	printf("%d",a);
//}
//int main()
//{
//	int i = 0;
//
//	//ѭ��ִ��10��
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//��ҵ
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

//#define���峣���ͺ�
//����
//#define max 100
//int main()
//{
//	int a = max;
//	printf("%d\n",a);
//	return 0;
//}
//��
//#define ADD(x,y) ((x) + (y))
//int main()
//{
//	int sum = ADD(3,5);
//	printf("%d\n",sum);
//	return 0;
//}



//ָ��
//int main()
//{
//	//int a = 100;//��������a��Ҫ���ڴ�����4�ֽڵĿռ�
//	//&a;//&ȥ��ַ������
//	//printf("%p\n",&a);//%p,��ӡ��ַ��16����
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
//	*pa = 11; //* -�����ò�����
//	printf("%d\n",a);
//	return 0;
//}

//�ṹ��
//ѧ������
//struct Stu
//{
//	char name[20];//���֣�20�����ǿռ��С
//	short age;//����
//};
//int main()
//{
//	struct Stu s1 = {"����",30};//s1Ϊѧ���ı���
//	printf("name=%s age=%d\n",s1.name,s1.age);
//	struct Stu* ps = &s1;
//	printf("%s %d\n",ps->name,ps->age);  //��������.-�ṹ��ĳ�Ա�� -> -�ṹ��ָ�룬ָ��ṹ���Ա
//	return 0;
//}