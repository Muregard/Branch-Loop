#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
//	int a;
//	printf("����������\n");
//	scanf("%d",&a);
//	if (a % 2 == 0)
//		printf("ż��\n");
//	else
//		printf("����\n");
//	return 0;
//
//}

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

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����������һ\n");
//		break;
//	case 2:
//		printf("���������ڶ�\n");
//		break;
//	case 3:
//		printf("������������\n");
//		break;
//	case 4:
//		printf("������������\n");
//		break;
//	case 5:
//		printf("������������\n");
//		break;
//	case 6:
//		printf("������������\n");
//		break;
//	case 7:
//		printf("������������\n");
//		break;
//	}
//	return 0;
//}

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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

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

//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("����������\n");
//	scanf("%s", password);
//	while (ch = getchar() != '\n')//������ȡ�������ַ���ֱ������'\n'
//	{
//		;
//	}
//	printf("��ȷ��(Y/N)\n");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1;i <=10;i++)
//		printf("%d ", i);
//	return 0;
//
//}

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

int main()
{
	int i = 0;
	char password[20] = {0};
	printf("����������\n");
	for (i = 0;i < 3;i++)
	{
		scanf("%s", password);
		if(strcmp(password,"aahph")==0)
		{
			printf("�ɹ���¼\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}