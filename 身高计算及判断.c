#include<stdio.h>

int main(){
	char s;
	printf("请输入你的性别m或w\n");
	scanf("%c",&s);
	double father,mother,trueyou;
	double error,you;
	printf("请输入你的父母和你的身高\n");
	scanf("%lf%lf%lf",&father,&mother,&trueyou);
	if(s=='m'){
		you=(father+mother)*1.08/2;
		error=trueyou-you;
		if(error<=3&&error>=-3){
			printf("符合该公式\n");
		}else{
			printf("不符合该公式\n");
		}
	}else{
		you=(father*0.923+mother)/2;
		error=trueyou-you;
			if(-3<=error&&error<=3){
			printf("符合该公式\n");
		}else{
			printf("不符合该公式\n");
	}
	return 0;
	} 
} 
