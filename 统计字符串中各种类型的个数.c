#include<stdio.h>
#include<string.h>
#define N 100

void number(char a[]);
int main(){
	char a[N];
	printf("请输入\n");
	gets(a);
	number(a);
	return 0;
}
void number(char a[]){
	int i=0;
	int q=0,w=0,e=0,r=0;
	int s=strlen(a);
	for(i=0;i<s;i++){
		if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'){
			q++;
		}else if(a[i]>='0'&&a[i]<='9'){
			w++;
		}else if(a[i]==' '){
			e++;
		}else{
			r++;
		}
	}
	printf("字母的个数为%d\n",q);
		printf("数字的个数为%d\n",w);
		printf("空格的个数为%d\n",e);
		printf("其他字符的个数为%d",r);
}
