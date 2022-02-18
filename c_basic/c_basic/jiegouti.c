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
//	struct stu s = { "李四", 20 };
//	//传值调用
//	print1(s);
//	//传址调用
//	print2(&s);
//	return 0;
//}

//计算数组大小，之前的题，sizeof计算数组大小，计算的是总大小，以字节为单位。
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}