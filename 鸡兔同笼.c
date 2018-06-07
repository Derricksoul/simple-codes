#include<stdio.h>

int main(){
	int i,j;
	int head,foot; 
	printf("请输入总只数和总脚只数\n");
	scanf("%d %d",&head,&foot);
	if(foot>=2*head){
		for(j=0;j<=head;j++){
			for(i=0;i<=foot;i++){
				if(i+j==head&&2*i+4*j==foot){
					printf("鸡%d 兔%d",i,j); 
				} 
			}
		}
	}else{
		printf("输入错误，请重新输入\n"); 
	} 
	return 0;
} 
