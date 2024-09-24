#include<stdio.h>
#include<string.h>
int main(){
	char str[100][100];
	int n,i,j,k=0;
	int arr[i],largest=0,second=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		int n1=strlen(str[i]);
		if(n1>largest){
			second=largest;
			largest=n1;
		}
		else{
			second=n1;
		}
	}
	if(largest==second){
		printf("0");
	}
	else{
		printf("%d",second);
	}
}
