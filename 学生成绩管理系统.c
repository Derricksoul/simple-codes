#include<stdio.h>
#include<conio.h>
#define N 30

struct Test{        //定义结构体变量 
	char name[10];
	int number;
    int Chinese;
	int Math;
	int English;
}; 
void rank(struct Test study[],int n);//函数声明 
void stat(struct Test study[],int n);//函数声明 
void see(struct Test study[],int n);//函数声明 

int main(){
	struct Test study[N];
	int i;//循环体结构变量 
	int a;//查询功能按钮 
	int n;//学生人数变量 
	printf("请输入学生的人数\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){         //输入学生的信息 
		printf("请输入姓名\n");
		scanf("%s",study[i].name);
		printf("请输入学号\n");
		scanf("%d",&study[i].number);
		printf("请输入语文成绩\n");
		scanf("%d",&study[i].Chinese);
		printf("请输入数学成绩\n");
		scanf("%d",&study[i].Math); 
		printf("请输入英语成绩\n");
		scanf("%d",&study[i].English);
		 
	}
	printf("请输入要查询的选项：排序 0,成绩分数段 1，查询同学成绩 2\n");//对学生的信息进行查询 
	scanf("%d",&a);
		switch(a){
		case 0:
			rank(study,n);
			break;
		case 1:
			stat(study,n);
			break;
		case 2:
			see(study,n);
			break;
		default:
			printf("你输入的格式有误\n");
	}
	return 0;
}
void input() 
void rank(struct Test study[],int n){       //实现学生的成绩排序 
	int i,j,k;
	int add1,add2;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			add1=study[i].Chinese+study[i].Math+study[i].English;
			add2=study[j].Chinese+study[j].Math+study[j].English;
			if(add1<add2){
				study[i].Chinese^=study[j].Chinese^=study[i].Chinese^=study[j].Chinese;
				study[i].Math^=study[j].Math^=study[i].Math^=study[j].Math;
				study[i].English^=study[j].English^=study[i].English^=study[j].English;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("姓名%s\t",study[i].name);
		printf("学号%d\t",study[i].number);
		printf("语文%d\t",study[i].Chinese);
		printf("数学%d\t",study[i].Math);
		printf("英语%d\n",study[i].English);
	}
}
void stat(struct Test study[],int n){    //统计学生的分数段 
}
void see(struct Test study[],int n){     //查询某个学生的信息 
    int i; 
    printf("请输入要查询的同学的学号\n");
    scanf("%d",&i);
    printf("姓名%s\t",study[i].name);
	printf("学号%d\t",study[i].number);
	printf("语文%d\t",study[i].Chinese);
	printf("数学%d\t",study[i].Math);
	printf("英语%d\n",study[i].English);
}
