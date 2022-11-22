#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//奇偶数判断
//int main()
//{
//	int a;
//	printf("请输入整数\n");
//	scanf("%d",&a);
//	if (a % 2 == 0)
//		printf("偶数\n");
//	else
//		printf("奇数\n");
//	return 0;
//
//}

//用while循环输出1-100中的所有奇数
//int main()
//{
//	int i = 0;
//	while (i <=100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//用Switch case语句判断星期几
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("今天是星期一\n");
//		break;
//	case 2:
//		printf("今天是星期二\n");
//		break;
//	case 3:
//		printf("今天是星期三\n");
//		break;
//	case 4:
//		printf("今天是星期四\n");
//		break;
//	case 5:
//		printf("今天是星期五\n");
//		break;
//	case 6:
//		printf("今天是星期六\n");
//		break;
//	case 7:
//		printf("今天是星期天\n");
//		break;
//	}
//	return 0;
//}

//用Switch case语句判断工作日和休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("工作日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//输出1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//输出1-4，然后死循环；continue跳出本次循环，到判断阶段
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;

//while(ch=getchar()!='\n')持续读取缓冲区字符，直到出现'\n'
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("请输入密码\n");
//	scanf("%s", password);
//	while (ch = getchar() != '\n')//持续读取缓冲区字符，直到出现'\n'
//	{
//		;
//	}
//	printf("请确认(Y/N)\n");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//
//	return 0;
//}

//用for循环输出1-10的数
//int main()
//{
//	int i;
//	for (i = 1;i <=10;i++)
//		printf("%d ", i);
//	return 0;
//
//}

//用do while循环输出1-10的数
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d ", i);
//	} 
//	while (i<10);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n=0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//计算1！+2！+3！+...+10！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1,sum=0;i <= 10;i++)
//	{
//		for (n = 1,ret=1;n <= i;n++)
//		{
//			ret *= n;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//输入密码登录，可以输入三次
int main()
{
	int i = 0;
	char password[20] = {0};
	printf("请输入密码\n");
	for (i = 0;i < 3;i++)
	{
		scanf("%s", password);
		if(strcmp(password,"aahph")==0)
		{
			printf("成功登录\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}

//在一个有序数组中查询某个元素的下标
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i < sz;i++)
	{
		if (k == arr[i])
		{
			printf("找到了,下标是：%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");
	return 0;
}
