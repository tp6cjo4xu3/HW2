#include <stdio.h>
#include <stdlib.h>
int a,b,j,i;
int main(void)
{
	printf("½Ð¿é¤Jªø¡B¼e : \n");
	scanf_s("%d%d", &a, &b);
	for (i = 1; i <= a; i++){
		printf("+");
	}


	printf("\n");
	for (i = 1; i <= b - 2; i++){
		printf("+");
		for (j = 1; j <= a - 2; j++)
		{
			printf(" ");
		}
		printf("+\n");
	}


	for (i = 1; i <= a; i++)
	{
		printf("+");
	}
	printf("\n");
	system("pause");
	return 0;
}