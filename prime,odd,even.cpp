#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j,k,count=0,n=0;
	int prime=1;
	scanf("%[^\n]s",str);
	n=strlen(str);
	if(n<=1){
		prime=0;
		
	}
	else{
	
	for(j=2;j<n;j++){
		if(n%j==0){
			prime=0;
			break;
		}
	}
	}
	if(prime==0){
		printf("%d not prime",n);
		
	}
	else{
		printf("%d prime",n);
		
	}
	if(n%2==0){
		printf("%deven",n);
	}
	else{
		printf("%dodd",n);
	}
}
