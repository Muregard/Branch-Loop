#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>


//分数求和
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个数的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i < sz;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int product = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			product = j * i;
//			printf("%d*%d=%-2d ", j, i, product);//%-2d两位数，位数不够用空格填充，左对齐
//		}
//		if (j > i)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//二分查找练习
//int main()
//{
//	int arr[] = { 1,3,5,7,9,11,13,15,17,19 };
//	int k = 20;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//		while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
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
