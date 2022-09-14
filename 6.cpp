#include <stdio.h>
int main()
{
	int a, b;
	int i, j;
	int n;
	scanf_s("%d", &n);;
	int sum[20] = { 0 };
	for (i = 0; i < n; i++)
	{
         scanf_s("%d%d", &a, &b);
	     sum [i] = a + b;
	}
	for (j = 0; j < n; j++)
	{
     printf("%d\n", sum[j]);
	}
		
	return 0;
}