#include <stdio.h>
#include <stdlib.h>
double a, b, c, d, e;
int main(void)
{
	while (a==a){
		printf("Enter sales in dollars (-1 to end) : ");
		scanf("%lf", &a);
		if (a == -1){
			system("pause");
			return 0;
		}
		printf("Salary is : $%.2lf\n", 200 + a * 9 / 100);
	}
	system("pause");
	return 0;
}