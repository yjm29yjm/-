#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[20] = "#########";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}