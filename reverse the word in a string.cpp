#include<stdio.h>
#include<string.h>
int main(){
	char str[100],rev[50][100],rev1[10][100];
	int i,j=0,k=0,l=0,m=0;
	scanf("%[^\n]s",str);
	int n=strlen(str);
	for(i=0;i<n;i++){
		if(str[i]==' '){
			rev[j++][k]='\n';
			
			
		}
		else{
			rev[j][k++]=str[i];
		}
	}
	rev[j][k]='\0';
	for(i=0;i<j;i++){
		for(l=k;l>=0;l--){
			rev1[i][m++]=rev[i][l];
		}
	}
	for(j=0;j<i;j++){
		printf("%s",rev1[j]);
	}
}
