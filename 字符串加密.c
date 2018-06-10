#include<stdio.h>
#include<string.h>

int main(){
	int i;
	char a[30],b[30];
	gets(a);
	strcpy(b,a);
	for(i=0;i<30;i++){
		if(a[i]>=97&&a[i]<=122){
			b[i]=a[i]-4;
		}
		if(a[i]>=65&&a[i]<=90){
			b[i]=a[i]+3;
		}
	}
	printf("输入的原字符为：\n");
	puts(a);
	printf("加密后的字符为：\n");
	puts(b); 
} 
