#include <stdio.h>
#include <stdlib.h>
int a;
double  c, d,b, e;
int main(void)
{
	while (1 == 1){
		printf("1.經理 2.時薪工 3.抽佣金工 4.零工\n請選擇員工類別(1~4) : \n");
		scanf("%d", &a);
		switch (a){
		case 1:
			printf("請輸入經理的固定周薪 : ");
			scanf("%lf", &b);
			printf("經理的週薪 : %.2lf\n", b);
			break;
		case 2:
			printf("請輸入本週工時 : ");
			scanf("%lf", &c);
			printf("請輸入時薪工的時薪 : ");
			scanf("%lf", &d);
			if (c > 40){
				e = 40 * d + (c - 40)*1.5*d;
				printf("時薪工的週薪 : %.2lf\n", e);
			}
			else{
				e = c*d;
				printf("時薪工的週薪 : %.2lf\n", e);
			}
			break;
		case 3:
			printf("請輸入當週銷售金額 : ");
			scanf("%lf", &b);
			printf("抽佣金工的週薪 : %.2lf\n", 250 + b*0.057);
			break;
		case 4:
			printf("請輸入當週完成件數 : ");
			scanf("%lf", &b);
			printf("請輸入每件酬勞 : ");
			scanf("%lf", &c);
			printf("零工的週薪 : %.2lf\n", b*c);
			break;
		}
	}
	system("pause");
	return 0;
}