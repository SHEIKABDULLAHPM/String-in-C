#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,j,k=0,prev=0,value=0,tot=0;
	scanf("%s",str);
	int n=strlen(str);
	for(i=n-1;i>=0;i--){
		if(str[i]=='I'||str[i]=='V'||str[i]=='X'||str[i]=='L'||str[i]=='C'||str[i]=='D'||str[i]=='M'){
			switch(str[i]){
				case 'I':value=1;break;
				case 'V':value=5;break;
				case 'X':value=10;break;
				case 'L':value=50;break;
				case 'C':value=100;break;
				case 'D':value=500;break;
				case 'M':value=1000;break;
				default:value=0;break;
			}
			if(value<prev){
				tot-=value;
				
			}
			else if(value>=prev){
				tot+=value;
				prev=value;
			}
			
		}
		
	}
	printf("%d",tot);
}
