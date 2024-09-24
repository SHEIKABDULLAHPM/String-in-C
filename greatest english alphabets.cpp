#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j=0,k,great=0;
	scanf("%s",str);
	int n=strlen(str);
	for(i=0;i<n;i++){
		if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
			great=str[0];
			int sample=str[i];
			if(great<sample){
				great=sample;
				j=i;
			}
		}
	}
	printf("%c",str[j]);
}
