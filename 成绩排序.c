#include<stdio.h>

int main(){
	int score[30];
	int i=0,j,k,t;
	int f=0;
    do{
		scanf("%d",&score [i]);
		i++;
	}while(i<=30&&score[i-1]>=0);
	k=i-2;
	for(i=0;i<k;i++){
		for(j=i+1;j<k+1;j++){
			if(score[i]>score[j]){
			t=score[i];
			score[i]=score[j];
			score[j]=t;
			}	
		
		}
			if(score[i]<60){
			printf("%d\n",score[i]);
				f++;
			}
	}
	printf("不及格人数为：%d",f);
	printf("最高成绩为：%d",score[k]);
	printf("最低成绩为：%d",score[0]);
	return 0;
}
