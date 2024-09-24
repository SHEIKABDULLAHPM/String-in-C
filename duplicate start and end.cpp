#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[50],seen[100]={0};
	int i,j,k=0,l,m;
	scanf("%[^\n]s",str1);
	int n=strlen(str1);
	
	for(i=0;i<n;i++){
		int flag=1;
		if(seen[i]==0){
		for(j=i+1;j<n;j++){
			if(str1[i]==str1[j]){
				seen[j]=1;
				break;
		}
		else{
			str2[k++]=str1[i];
			for(l=n-1;l>=0;l--){
				for(m=l-1;m>=0;m--){
						if(str1[i]==str1[j]){
						seen[j]=1;
						break;
					}
					else{
						str2[k++]=str1[i];
					}
		}
						
			}}
		}
		}
				
				
				
	}
	
printf("%s",str2);
}
