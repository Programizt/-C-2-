#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main()
{
	int size;
	scanf("%d", &size);
	int* arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < size; i++) {
		printf("arr[");
		printf("%d", i);
		printf("] = %d\n", arr[i]);
	}
	free(arr);
}
