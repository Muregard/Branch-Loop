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
