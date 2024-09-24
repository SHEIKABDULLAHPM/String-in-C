#include<stdio.h>
#include<string.h>
int main(){
	char str[100],f,f1;
	int i,j,k,count=0;
	scanf("%[^\n]s",str);
	int n1=strlen(str);
	int min=n1,max=0;
	for(i=0;i<n1;i++){
	int c=0;
	for(k=i-1;k>=0;k--){
		if(str[i]==str[k]){
			c++;
			
		}
	}
	if(c==0){
		count=1;
		for(j=i+  1;j<n1;j++){
			if(str[i]==str[j]){
				c++;
				count++;
				
			}
		}
	}
	if(max<count){
		max=count;
		f=str[i];
	}
	if(min>count){
		min=count;
		f1=str[i];
	}
				
}
printf("%c %c",f,f1);
}
