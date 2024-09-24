#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j,k;
	scanf("%s",str);
	int n=strlen(str);
	char max=str[0];
	char min=str[0];
	int maxcount=0,mincount=n;
	for(i=0;i<n;i++){
		int count=1;
		for(j=i+1;j<n;j++){
			if(str[i]==str[j]){
				count++;
				
			}
		}
		if(count>maxcount){
			maxcount=count;
			max=str[i];
		}
		if(count<mincount){
			mincount=count;
			min=str[i];
		}
	}
	printf("%c ",min);
	printf("%c",max);
}
