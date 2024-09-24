#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int n=strlen(str);
	int i,j,k,round=0,curly=0,box=0;
	for(i=0;i<n;i++){
		if(str[i]=='('){
			round++;
		}
		else if(str[i]==')'){
			if(round==0||str[i-1]=='{'||str[i-1]=='['){
				printf("false");
				return 0;
			}
			round--;
			
		}
		else if(str[i]=='['){
			box++;
			
		}
		else if(str[i]==']'){
			if(box==0||str[i-1]=='{'||str[i-1]=='('){
				printf("false");
				return 0;
			}
			box--;
		}
		else if(str[i]=='{'){
			curly++;
		}
		else if(str[i]=='}'){
			if(curly==0||str[i-1]=='('||str[i-1]=='['){
				printf("false");
				return 0;
			}
			curly--;
		}
	}
	if(curly==0&&round==0&&box==0){
		printf("true");
	}
	else{
		printf("false");
	}
}
