//first capital letter in a string
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j,k=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A'&&str[i]<='Z'){
			printf("%c",str[i]);
			break;
		}
	}
}
