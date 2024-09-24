#include<stdio.h>
#include<String.h>
int main(){
	char str1[100],str2[100][100];
	scanf("%[^\n]s",str1);
	int n=strlen(str1);
	int i=0,j=0,k=0;
	for(i=0;i<n;i++){
		if(str1[i]!=' '){
			str2[j++][k]='\0';
			k=0;
		}
		else{
			str2[j][k++]=str1[i];
		}
	}
	str2[j][k]='\0';
	for(i=j;i>=0;j--){
		printf("%s",str2[i]);
	}
}
