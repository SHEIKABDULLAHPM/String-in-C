#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100][100];
	int i,j=0,k=0;
	scanf("%[^\n]s",str1);
	int n1=strlen(str1);
	int max=0,min=n1,c1=0,c2=0;
	for(i=0;i<n1;i++){
		if(str1[i]==' '){
			str2[j][k]='\0';
			j++;
			k=0;
		}
		else{
			str2[j][k]=str1[i];
			k++;
		}
	}
	str2[j][k]='\0';
	for(i=0;i<=j;i++){
		int n2=strlen(str2[i]);
		if(n2>max){
			max=n2;
			c1=i;
		}
		if(n2<min){
			min=n2;
			c2=i;
		}
	}
	printf("%s\n",str2[c1]);
	printf("%s",str2[c2]);
}
