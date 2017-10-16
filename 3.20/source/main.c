#include <stdio.h>
#include <stdlib.h>
double a, b, c, d, e;
int main(void)
{
	while (a==a){
		printf("Enter # of hours worked (-1 to end) : ");
		scanf("%lf", &a);
		if (a == -1){
			system("pause");
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00) : ");
		scanf("%lf", &b);
		if (a <= 40){
			printf("Salary is : %.2lf\n", a*b);
		}
		else{
			printf("Salary is : %.2lf\n", 40 * b + (a - 40)*1.5*b);
		}
	}
	system("pause");
	return 0;
}