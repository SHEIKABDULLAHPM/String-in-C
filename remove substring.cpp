#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],str3[100];
    scanf("%[^\n]s",str1);
    scanf("%s",str2);
    int n1,n2,i,j,k=0,found=0;
    n1=strlen(str1);
    n2=strlen(str2);
    for(i=0;i<n1;i++){
        found=1;
        for(j=0;j<n2;j++){
            if(str1[i+j]!=str2[j]){
                found=0;
                break;
            }
        }
        if(found&&(i=0||str1[i-1]==' ')&&(str1[i+n2]==' '||str1[i+n2]=='\0')){
            i+=n2-1;
        }
        else{
            str3[k++]=str1[i];
        }
    }
    printf("%s",str3);
}
