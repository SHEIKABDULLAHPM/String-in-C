//length of a string after deleting similar ends
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],nondup[100];
	int i,j,k=0,count=0;
	scanf("%s",str);
	int n=strlen(str);
	i=0;
	j=n-1;
	while(i<j&&str[i]==str[j]){
		i++;
		j--;
		
	}
	if(j-)
	printf("%d",j+i-1);
}
