//isomorphic strings
#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	int i,j,k=0,map1[122]={0},map2[122]={0};
	char ch1,ch2;
	scanf("%s",str1);
	scanf("%s",str2);
	int n1=strlen(str1);
	int n2=strlen(str2);
	if(n1!=n2){
		printf("invalid input");
		
	}
	else{
		int iso=1;
		for(i=0;i<n1;i++){
			ch1=str1[i];
			ch2=str2[i];
			if(map1[ch1]==0&&map2[ch2]==0){
				map1[ch1]=ch2;
				map2[ch2]=ch1;
			}
			else if(map1[ch1]!=ch2||map2[ch2]!=ch1)	
			{
				iso=0;
				break;
			}
							
		}
		if(iso){
			printf("isomorphic ");
		}
		else{
			printf("not isomorphic");
		}	
	}
	
}
