#include<stdio.h>
#include<String.h>
int main(){
	char str[10][100];
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);	
	}
	for(i=0;i<n;i++){
		int j=11;
		if(str[i][j]>='6'){
			k++;
		}
	}
	printf("%d",k);
	
	
}
