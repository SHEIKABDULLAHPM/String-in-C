#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[10][50],str3[10][50];
	scanf("%[^\n]s",str1);
	int i,j=0,k=0,l=0,m=0;
	int n1=strlen(str1);
	for(i=0;i<n1;i++){
		if(str1[i]==' '){
			str2[j++][k]='\0';
			k=0;
		}
		else{
			str2[j][k++]=str1[i];
		}
	}
	str2[j][k]='\0';
	for(i=0;i<=j;i++){
		int n2=strlen(str2[i]);
		k=0;
		for(l=n2-1;l>=0;l--){
			str3[i][k++]=str2[i][l];
		}
		str3[i][k]='\0';
		
	}
	for(i=0;i<=j;i++){
		printf("%s ",str3[i]);
	}
}
