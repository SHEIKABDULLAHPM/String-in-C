#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    scanf("%[^\n]s",str);
    int i,j,len;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                str[j]='*';
            }
        }
    }
    for(i=0;i<len;i++)
    {
        if(str[i]!='*')
        {
            printf("%c",str[i]);
        }
        else
        {
            continue;
        }
    }
}

