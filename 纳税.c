#include<stdio.h>

int main(){
	double a,c,e;
	int b; 
	printf("请输入你的税前收入\n");
	scanf("%lf",&a);
	c=a-3500;
	b=1*(c<0)+2*(0<=c&&c<1500)+3*(1500<=c&&c<4500)+4*(4500<=c&&c<9000)+5*(9000<=c&&c<35000)+6*(35000<=c&&c<55000)+7*(55000<=c&&c<80000)+8*(80000<=c);
	switch(b){
		case 1:
				printf("0");
			break; 
		case 2:
			e=c*0.03;
			printf("%f",e);
			break; 
		case 3:
			e=c*0.1-105;
				printf("%f",e);
			break; 
		case 4:
			e=c*0.2-555;
			printf("%f",e);
			break; 
		case 5:
			e=c*0.25-1005;
				printf("%f",e);
			break; 
		case 6:
			e=c*0.3-2755;
				printf("%f",e);
			break; 
		case 7:
			e=c*0.35-5505;
				printf("%f",e);
			break; 
		case 8:
			e=c*0.45-13505;
				printf("%f",e);
			break; 
		default:
			printf("输入格式错误\n");
			break; 
		 
	} 
	return 0;
}
