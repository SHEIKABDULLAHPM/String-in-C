#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[50][50],str3[50][50];
	int i,j=0,k=0,n1;
	fgets(str1,sizeof(str1),stdin);
	scanf("%d",&n1);
	int n=strlen(str1);
	if(str1[n-1]=='\n'){
		str1[n-1]='\0';
		
	}
	for(i=0;i<n;i++){
		if(str1[i]==' '){
			str2[j][k]='\0';
			j++;
			k=0;
		}
		else{
			str2[j][k]=str1[i];
			k++;
			
		}
	}
	str2[j][k]='\0';
	for(i=0;i<n1;i++){
		for(j=0;j<n1;j++){
			str3[i][j]=str2[j][i];
			
		}
				
	}
	for(i=n1-1;i>=0;i--){
		puts(str3[i]);
	}
}
