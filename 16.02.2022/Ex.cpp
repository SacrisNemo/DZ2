#include "Ex.h"

void print(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int* inv(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = -arr[i];
	}
	return arr;
}

int* neu(int* arr, unsigned size)
{
	int x = 0;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i-1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = arr[j];
			}
		}
	}
	return arr;
}

int* nev(int* arr, unsigned size)
{
	int x = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = arr[j];
			}
		}
	}
	return arr;
}

int* (*ch(int* arr, unsigned size))(int*, unsigned)
{
	int c = sum(arr,size);
	int* (*act[])(int* arr, unsigned size) = { inv, neu, nev };
	if (c == arr[0]) return act[0];
	if (c > arr[0]) return act[1];
	if (c < arr[0]) return act[2];
}

int sum(int* arr, unsigned size)
{
	int s = 0;
	for (int i = 0; i < size; i++)
	{
		s += arr[i];
	}
	return s;
}
