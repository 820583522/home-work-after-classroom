#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void SingleNumbers(int* a,int size,int* pn1,int* pn2)
{
	int n = 0;
	//��0��������ÿ�������
	for (int i = 0; i < size; i++)
		n ^= a[i];
	//�ҳ�n�ĵڼ�λ��1
	int j = 0;
	while (n & (1<<j) == 0)
		j++;
	//��������ÿ����a[i]&(1<<i)�����Ϊ1�Ĺ�Ϊһ�飬���Ϊ0�Ĺ�Ϊһ��
	for (int i = 0; i < size; i++)
	{
		if (a[i] & (1 << j))
			*pn1 ^= a[i];
		else
			*pn2 ^= a[i];
	}
}

//int main()
//{
//	int a[10] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 6 };
//	int n1 = 0, n2 = 0;
//	SingleNumbers(a, sizeof(a)/sizeof(a[0]),&n1, &n2);
//	printf("%d %d", n1, n2);
//}

int MissingNum(int* a, int size)
{
	//��0��������ÿ�������
	int n = 0;
	for (int i = 0; i < size; i++)
		n ^= a[i];

	//��n�ٺ�0-sizeһ�����
	for (int i = 0; i <= size; i++)
		n ^= i;
	return n;
}
//int main()
//{
//	int a[10] = { 0, 1, 2, 3, 4, 6, 7, 8, 9, 10 };
//	int n=MissingNum(a, sizeof(a) / sizeof(a[0]));
//	printf("%d\n", n);
//}

//��ת����
void reverse(int* a, int begin, int end)
{
	while (begin < end)
	{
		int tmp = a[begin];
		a[begin] = a[end];
		a[end] = tmp;
		begin++; 
		end--;
	}
}
void rotate(int* nums, int numsSize, int k)
{
	//������ת��
	//����ת���numsSize-k��Ԫ�أ�����ת�ұ�k��Ԫ�أ�����ת��������
	// [0,numsSize-k-1]    [numsSize-k,numsSize-1]  [0,numsSize-1]
	reverse(nums, 0, numsSize - k - 1);
	reverse(nums, numsSize - k, numsSize - 1);
	reverse(nums, 0, numsSize - 1);
}
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	rotate(a, sizeof(a) / sizeof(a[0]),3);
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", a[i]);
	}
}