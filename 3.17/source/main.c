#include <stdio.h>
#include <stdlib.h>
double a,b,c,d,e;
int main(void)
{
	while (a != -1){
		printf("Enter account number(-1 to end) : ");
		scanf("%lf", &a);
		if (a == -1){
			system("pause");
			return 0;
		}
		printf("Enter beginning balance : ");
		scanf("%lf", &b);
		printf("Enter total charges : ");
		scanf("%lf", &c);
		printf("Enter total credits : ");
		scanf("%lf", &d);
		printf("Enter credits limit : ");
		scanf("%lf", &e);
		printf("\n");
		if (b + c - d > e){
			printf("Account : %.lf\n", a);
			printf("Credit limit : %.2lf\n", e);
			printf("Balance : %.2lf\n", b + c - d);
			printf("Credit Limit Exceeded .\n\n");
		}
	}
	
	system("pause");
	return 0;
}