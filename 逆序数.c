#include<stdio.h>

int main(){
	int a,b,i;
	printf("请输入一个五位数的整数\n");
	scanf("%d",&a);
	for(i=1;i<=5;i++){
		b=a%10;
		a=a/10;
		printf("%d ",b);
	} 
	return 0;}
