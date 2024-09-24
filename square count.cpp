//print the square of count(i.e.fizzle [1,1,2,,1,1],count=6,sqaue=36)

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j,k,count=0,sum=0;
	scanf("%s",str);
	int n=strlen(str);
	for(i=0;i<n;i++){
		count=1;
		if(str[i]==str[i+1]){
			count++;
			i=i+1;
			
		}
		printf("%d",count);
		sum+=count;
	}
	printf("\n%d",sum*sum);
}
