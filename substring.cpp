//Search a substring in a string using function
#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	int i,j,k=0;
	scanf("%s",str1);
	scanf("%s",str2);
	
	
	if(strstr(str1,str2)){
		printf("true");
	}
	else{
		printf("false");
		
	}
}
