#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//迭代方法，效率高时间复杂度为O（N）
long long Fibonacci(unsigned int n)
{
	long long first = 0;
	long long  second = 1;
	long long FibN = 0;
	if (n < 2)
	{
		return n;
	}

	for (int i = 2; i <= n; i++)
	{
		FibN = first + second;
		first = second;
		second = FibN;
	}

	return FibN;
}

//数组法，可以将数据全部保存起来

long long Fibonnacci(unsigned int n)
{
	long long *arr = new long long[n];
	for (int i = 0; i <= n; i++)
	{
		if (i < 2)
			arr[i] = i;

		else
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
	}
	return arr[n];
}