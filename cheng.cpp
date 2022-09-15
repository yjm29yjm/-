#include <stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <=n; i++)
	{
          ret *=i;
		
			
		if (i == n)
			break;
	}
	printf("ret=%d", ret);

		return 0;






}