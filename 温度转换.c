#include<stdio.h>

int main(){
	double c,f;
	printf("请输入华氏温度\n");
	scanf("%lf",&f);
	c=5.0/9*(f-32);
	printf("%f\n",c);
	return 0;
} 
