#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//二分查找方法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = arr[mid] + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//个字符逐渐向中间缩进显示
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char arr1[] = { "welcome to bit!!!!" };
	char arr2[] = { "##################" };
	int left = 0;
	//int right = sz - 2;//数组最后包含一个'\0'
	int right = strlen(arr1) - 1;
	while (left<=right)
	{

			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			Sleep(1000);//休息一秒
			system("cls");//执行系统命令的一个函数-cls-清空屏幕
			left++;
			right--;
	}
	printf("%s\n", arr2);
			return 0;
}

//三个数字从大到小排序
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//打印3的倍数的数
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

////输入两个数 求出最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//
//	for (i = 1;i <= a;i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			max = i;
//		}
//	
//	}
//	printf("%d\n", max);
//	return 0;
//}

//辗转相除法求最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//
//	}
//	printf("%d\n", n);
//	return 0;
//}

//打印1000到2000年之间的闰年
//判断year是否为闰年
//1.能被4整除并且不能被100整除是闰年
//2.能被400整除也是闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//判断100-200中的所有素数
//只能被1和本身整除
//试除法
//产生2->i-1
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//统计1-100包含9的数字个数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1;i <= 100;i++)
	{
		if (i % 10 == 9 || i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n包含9的数字有 % d个\n", count);
	return 0;
}
