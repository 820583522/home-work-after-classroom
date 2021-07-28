#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

int removeElement(int* nums, int numsSize, int val)
{
	if (nums == NULL || numsSize == 0)
	{
		return 0;
	}
	int src = 0, dst = 0;
	//结束条件时src出数组时
	while (src<numsSize)
	{
		if (nums[src] == val)
		{
			src++;
		}
		else
		{
			nums[dst] = nums[src];
			src++;
			dst++;
		}
	}
	return dst;
}

int removeDuplicates(int* nums, int numsSize)
{
	if (nums == NULL)
	{
		return 0;
	}
	if (numsSize<2)
		return numsSize;
	int src = 1, dst = 0;
	while (src<numsSize)
	{
		if (nums[src] == nums[dst])
		{
			src++;
		}
		else
		{
			dst++;
			nums[dst] = nums[src];
			src++;
		}
	}
	return dst + 1;
}
int main()
{
	int a[8] = { 1, 2, 2, 3, 4, 4, 5, 5 };
	int ret=removeDuplicates(a, 8);
	for (int i = 0; i < ret; ++i)
	{
		printf("%d  ", a[i]);
	}
}