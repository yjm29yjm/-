#include <stdio.h>

int main()
{
	int t;
	while (scanf_s("%d", &t))
	{
		if( (t < 60)&&(t>=0))
		
			printf("E\n");
		

		if ((t > 59) && (t < 70))
		
			printf("D\n");
		
		if ((t > 69) && (t < 80))
		
			printf("C\n");
		
		if ((t > 79) && (t < 90))
		
			printf("B\n");
		
		if ((t > 89) && (t < 101))
		
			printf("A\n");
		
		if ((t > 100)||(t<0))
		
			printf("Score is error!");
			break;
		
	}

	return 0;
}