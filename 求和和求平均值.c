#include<stdio.h>
#include<conio.h>

float sum(float a[10]);
int main(){
	int i;
	float a[10];
	float *p=a;
	printf("请输入十个整数\n");
	for(i=0;i<10;i++){
		scanf("%f",&a[i]);
	}
	printf("该十个数的和为%f\n",sum(p));
	printf("该十个数的平均值为%f\n",sum(p)/10);
	return 0;
}
float sum(float b[10]){
	int i;
	float s=0;
	for(i=0;i<10;i++){
		s=s+b[i];
	}
	return s;
}
