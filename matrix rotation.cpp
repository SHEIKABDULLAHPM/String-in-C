#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,k=0;
	scanf("%d",&n);
	char str1[n][n],str2[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf(" %c",&str1[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			str2[j][n-1-i]=str1[i][j];		
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c ",str2[i][j]);		
		}
		printf("\n");
	}
}
