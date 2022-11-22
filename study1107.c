#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏-带参数

//函数的实现
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 2
//	//函数方法
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;//取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	//指针变量- 一种用于存放地址的变量
//
//	return 0;
//}

//int main()
//{
//	char ch = 'D';
//	char* p=&ch;
//	*p = 'L';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(p));
//	return 0;
//
//}

//int main()
//{
//	int a = 10;//向内存申请4个字节空间
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	double d = 5.56;
//	double* pd = &d;//32位机器-4个字节，64位机器-8个字节
//	printf("%d\n", sizeof(pd));
//	//*pd = 7.62;
//	//printf("%lf\n", d);
//	return 0;
//
//}

//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	struct Book* pb = &b1;
	//利用pb打印出结构体变量的书名和价格
	//.  结构体变量.成员   (*pb).name
	//-> 结构体指针->成员  pb->name
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	return 0;
}