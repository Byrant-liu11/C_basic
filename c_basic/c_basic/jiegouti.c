#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//void print1(struct stu ss)
//{
//	printf("%s %d\n",ss.name,ss.age);
//}
//void print2(struct stu* sss)
//{
//	//printf("%s %d\n",(*sss).name,(*sss).age);
//	printf("%s %d\n",sss->name,sss->age);
//}
//int main()
//{
//	struct stu s = { "����", 20 };
//	//��ֵ����
//	print1(s);
//	//��ַ����
//	print2(&s);
//	return 0;
//}

//���������С��֮ǰ���⣬sizeof���������С����������ܴ�С�����ֽ�Ϊ��λ��
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}