#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[50];
	int i,j,k;
	scanf("%[^\n]s",str1);
	scanf("%s",str2);
	int n1=strlen(str1);
	int n2=strlen(str2);
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(str1[i+j]!=str2[j]){
			break;
			}
		}
	if(j!=n2){
		printf("%d ",i);
	}
	}
}
