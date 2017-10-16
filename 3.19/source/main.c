#include <stdio.h>
#include <stdlib.h>
double p,r,d;
int main(void)
{
	while (p == p){
		printf("Enter loan principal (-1 to end) : ");
		scanf("%lf", &p);
		if (p == -1){
			system("pause");
			return 0;
		}
		printf("Enter interest rate : ");
		scanf("%lf", &r);
		printf("Enter term of the loan  in days : ");
		scanf("%lf", &d);
		printf("The interest charge is $%.2lf\n\n", p*r*d / 365);
	}
	system("pause");
	return 0;
}