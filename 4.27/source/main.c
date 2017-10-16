#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a, b, c, d, e;
int main(void)
{
	for (c = 1; c <= 500; c++){
		for (a = 1; a <= 500; a++){
			for (b = 1; b <= 500; b++){
				if (c*c == a*a + b*b){
					printf("side 1 = %d ; side 2 = %d\n", a, b);
				}
			}
		}
	}
	system("pause");
	return 0;
}