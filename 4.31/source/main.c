#include <stdio.h>
#include <stdlib.h>
int a,b,c,e,d;
int main(void)
{

	for (a = 1; a <= 5; a++){
		for (b = 1; b <= 5 - a;b++){
			printf(" ");
		}
		for (b = 1; b <= 2 * a - 1; b++){
			printf("*");
		}
		printf("\n");
	}
	for (a = 4; a >= 1; a--){
		for (b = 1; b <= 5 - a; b++){
			printf(" ");
		}
		for (b = 1; b <= 2 * a - 1; b++){
			printf("*");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}