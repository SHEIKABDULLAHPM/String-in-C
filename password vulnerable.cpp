#include <stdio.h>
#include<string.h>
int main() {
    char s[50],s2[50],s3[50],count=0;
    scanf("%[^\n]s",s);
    int j=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            s2[j]=s[i];
            j++;
        }
    }
    s2[j]='\0';
    j=0;
    for(int k=0;s2[k]!='\0';k++)
    {
        if(s2[k]>='A' && s2[k]<='Z')
        {
            s3[j]=s2[k]+32;
            j++;
        }
        else
        {
            s3[j]=s2[k];
            j++;
        }
    }
    s3[j]='\0';
    int n=strlen(s3);
    j=n-1;
    for(int i=0;s3[i]!='\0';i++)
    {
        if(s3[i]==s3[j])
        {
            count++;
            j--;
        }
        else
        break;
    }
    if(count==n)
    printf("password is vulnerable");
    else
    printf("password is non-vulnerable");
}
