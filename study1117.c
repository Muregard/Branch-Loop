#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//���ֲ��ҷ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	char A[] = { "welcome to bit!!!!" };
	char B[] = { "##################" };
	int sz = sizeof(A) / sizeof(A[0]);
	int left = 0;
	int right = sz - 2;
	while (left<right)
	{
		if (strcmp(A, B) != 0)
		{
			B[left] = A[left];
			B[right] = A[right];
			printf("%s\n", B);
			left++;
			right--;
		}
		else
		{
			printf("%s\n", B);
			break;
		}
		
	}
			return 0;
}