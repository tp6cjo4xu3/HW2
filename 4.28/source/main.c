#include <stdio.h>
#include <stdlib.h>
int a;
double  c, d,b, e;
int main(void)
{
	while (1 == 1){
		printf("1.�g�z 2.���~�u 3.������u 4.�s�u\n�п�ܭ��u���O(1~4) : \n");
		scanf("%d", &a);
		switch (a){
		case 1:
			printf("�п�J�g�z���T�w�P�~ : ");
			scanf("%lf", &b);
			printf("�g�z���g�~ : %.2lf\n", b);
			break;
		case 2:
			printf("�п�J���g�u�� : ");
			scanf("%lf", &c);
			printf("�п�J���~�u�����~ : ");
			scanf("%lf", &d);
			if (c > 40){
				e = 40 * d + (c - 40)*1.5*d;
				printf("���~�u���g�~ : %.2lf\n", e);
			}
			else{
				e = c*d;
				printf("���~�u���g�~ : %.2lf\n", e);
			}
			break;
		case 3:
			printf("�п�J��g�P����B : ");
			scanf("%lf", &b);
			printf("������u���g�~ : %.2lf\n", 250 + b*0.057);
			break;
		case 4:
			printf("�п�J��g������� : ");
			scanf("%lf", &b);
			printf("�п�J�C��S�� : ");
			scanf("%lf", &c);
			printf("�s�u���g�~ : %.2lf\n", b*c);
			break;
		}
	}
	system("pause");
	return 0;
}