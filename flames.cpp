#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	int i,j,k;
	gets(str1);
	gets(str2);
	int n1=strlen(str1);
	int n2=strlen(str2);
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(str1[i]==str2[j]){
				str1[i]=str2[j]='*';
				break;
				
			}
			
		}
	}
	int count=0;
	for(i=0;i<n1;i++){
		if(str1[i]!='*'){
			count++;
		}
	}
	for(i=0;i<n2;i++){
		if(str2[i]!='*'){
			count++;
		}
	}
	char flames[]="FLAMES";
	int n3=strlen(flames);
	int pos=0;
	while(n3!=1){
		pos=(pos+count-1)%n3;
		for(i=pos;i<n3-1;i++){
			flames[i]=flames[i+1];
		}
		flames[n3-1]='\0';
		n3--;
		
	}
	printf("%c",flames[0]);
}
