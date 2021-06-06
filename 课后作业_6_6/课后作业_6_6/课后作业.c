#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


//模拟实现strlen
//size_t my_strlen(const char*arr)
//{
//	assert(arr);
//	int len = 0;
//	while ( *arr ++!= 0)
//	{
//		len++;
//	}
//	return len;
//}

//int main()
//{
//	char* arr = "hello bit";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//模拟实现strcpy
//char *my_strcpy(char* arr1,const char* arr2)
//{
//	assert(arr1&&arr2);
//	char* ret = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char *arr2= "hello bit";
//
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//模拟实现strcmp
//int my_strcmp(const char* arr1,const char* arr2)
//{
//	assert(arr1&&arr2);
//	while ((*arr1== *arr2)&&(*arr1!=0))
//	{
//		arr1++, arr2++;
//	}
//	return *arr1 - *arr2;
//}
//int main()
//{
//	char arr1[20] = "abcdefab";
//	char arr2[20] = "abcdefa";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	return 0;
//}


//模拟实现strcat
//char* my_strcat(char* arr1, char* arr2)
//{
//	char* ret = arr1;
//	while (*arr1++ != 0);
//	{
//		;
//	}
//	arr1--;
////找到arr1的/0
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
////追加字符串
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char *arr2 = "bit";
//	printf("%s\n", strcat(arr1, arr2));
//	return 0;
//}
//模拟实现strstr

char *  my_strstr(const char * str1,const char * str2)
{
	const char* cp = str1;
	const char* s1 = str1;
	const char* s2 = str2;
	if (*s2==0)
	{
		return str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1==*s2)
		{
			s1++;
			s2++;
			if (*s2 == 0)
			{
				return cp;
			}
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char* str1 = "abbbbcdefabcdef";
	char* str2 = "bbc";
	char* ret = my_strstr(str1,str2);
	if ( ret== NULL)
	{
		printf("没有找到该子串\n");
	}
	else
	{
		printf("找到该子串，%s\n", ret);
	}
	return 0;
}