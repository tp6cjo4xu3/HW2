#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double a,p=5000,r,n;
int main(void)                              
{
	for (r = 0.1; r <= 0.12; r += 0.005){
		printf("rate : %.2lf%%\n", r*100);
		for (n = 1; n <= 15; n ++){
			a = p*pow(1+r,n);
			printf("第%.0lf年結算時的本利和 : %.2lf\n", n,a);
		}
	}
	system("pause");
	return 0;
}