#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define �����ʶ������
//#define MAX 100
//#define ���Զ����-������

//������ʵ��
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 2
//	//��������
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;//ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	//ָ�����- һ�����ڴ�ŵ�ַ�ı���
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
//	int a = 10;//���ڴ�����4���ֽڿռ�
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	double d = 5.56;
//	double* pd = &d;//32λ����-4���ֽڣ�64λ����-8���ֽ�
//	printf("%d\n", sizeof(pd));
//	//*pd = 7.62;
//	//printf("%lf\n", d);
//	return 0;
//
//}

//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	struct Book* pb = &b1;
	//����pb��ӡ���ṹ������������ͼ۸�
	//.  �ṹ�����.��Ա   (*pb).name
	//-> �ṹ��ָ��->��Ա  pb->name
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	return 0;
}