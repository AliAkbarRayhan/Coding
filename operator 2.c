#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0;
    int a,b;
    char s[21];
    scanf("%s",&s);
    scanf("%d %d",&a,&b);
    int l = strlen(s);

    for(int i=0; i<l; i++)
    {
        if(s[i]=='+')
        {
            sum = sum + (a+b);
        }
        else if(s[i]=='*')
        {
            sum = sum + (a*b);
        }

    }

    printf("%d",sum);

}
