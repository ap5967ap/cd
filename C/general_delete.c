#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Implementing Remove Operation //

void* my_remove(void* arr, unsigned size, unsigned idx, unsigned sourceSize);
void printArr(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}

int main()
{
	int* grades = (int*)malloc(3 * sizeof(int));
	int grade;
	int* updatedArr = NULL;
	if (!grades) return NULL;
	grades[0] = 90;
	grades[1] = 80;
	grades[2] = 100;
	printArr(grades, 3);
	// deleting the third element... at index [1]
	updatedArr = (int*)my_remove(grades, 3 * sizeof(int), 1 * sizeof(int), sizeof(int));
	if (!updatedArr) return NULL;
	printArr(updatedArr, 2);

	return 0;
}

void* my_remove(void* arr, unsigned size, unsigned idx, unsigned sourceSize)
{
	void* newArr = malloc(size - sourceSize);
	if (!newArr) return NULL;
	memcpy(newArr, arr, idx);
	memcpy((char*)newArr + idx, (char*)arr + idx + sourceSize, size - idx - sourceSize);
	return newArr;
}