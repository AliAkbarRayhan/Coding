#include<stdio.h>
#include<math.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    char ss[111];

    while (t--)
    {
         int i , n,flag=0;
        scanf("%s",ss);
        n= strlen(ss);
        for(i=0;i<n/2;i++)
        {
            if(ss[i]!=ss[n-i-1]){
                flag=1;

        }}
        if(flag)
        {
            printf("Case #1: Not Palindrome\n");
        } else
        {
            if(strlen(ss)<=7)
                printf("Case #3: %s\n",ss);
            else
                printf("Case #2: %c%d%c\n",ss[0], n-2, ss[n-1]);
        }

    }


    return 0;
}
