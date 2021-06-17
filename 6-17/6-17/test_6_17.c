#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



void *my_memmove(void* dst, const void* src, size_t count)
{
	void* ret = dst;
	assert(dst&&src);
	if (dst < src)
	{
		while (count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dst + count) = *((char*)src + count);
		}
	}
	return ret;

}
void *my_memcpy(void* dst,const void* src,size_t count)
{
	assert(dst&&src);
	void* ret = dst;
	while (count--)
	{
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	char arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr1+2, arr1, 5);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr1 + i));
	}
	return 0;
}