#include <stdio.h>
#include <stdlib.h>
int a, b, c, d, e;
int main(void)
{
	for (a = 1; a <= 10; a++){
		for (b = 1; b <= a; b++){
			printf("*");
		}
		printf("\n");
	}
	printf("---------------------------------------------------\n");
	for (a = 1; a <= 10; a++){
		for (b = 1; b <= 10-a; b++){
			printf("*");
		}
		printf("\n");
	}
	printf("---------------------------------------------------\n");
	for (a = 1; a <= 10; a++){
		for (b = 1; b <= a; b++){
			printf(" ");
		}
		for (b = 1; b <= 10 - a; b++){
			printf("*");
		}
		printf("\n");
	}
	printf("---------------------------------------------------\n");
	for (a = 1; a <= 10; a++){
		for (b = 1; b <= 10-a; b++){
			printf(" ");
		}
		for (b = 1; b <=  a; b++){
			printf("*");
		}
		printf("\n");
	}

	

	system("pause");
	return 0;
}