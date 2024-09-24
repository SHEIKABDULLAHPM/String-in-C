#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j,k;
	scanf("%[^\n]s",str);
	int n=strlen(str);
	int prime=1;
	if(n==0||n==1){
		prime=0;
	}
	else{
		for(i=2;i<n;i++){
		if(n%i==0){
			prime=0;
			break;
		}
	}
	}
	
	if(prime){
		printf("%d prime\n",n);
	}
	else{
		printf("%d not prime\n",n);
	}
	if(n%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}
