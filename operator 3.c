
   /*
   You are given a string S consisting only +(Addition),*(Multiplication). The next line will contain two positive values.

Now, Calculate the sum of every operations. See the explanation for more clarification.

Input Format

First line contains a string S, consisting only +(Addition),*(Multiplication) operator.
The second line will contain two positive integers a and b
Constraints

1 <= |S| <= 20, where |S| means the length of S.
1<= a, b <= 50
Output Format

Print the summation which were perform based on String S.
Sample Input 0

+*
5 10*/
#include<stdio.h>
#include <string.h>


int main()
{
    //Initializing variables.
     int sum = 0;
    char str[21] ;
    int a,b;
    scanf("%s",&str);
    scanf("%d%d",&a,&b);
    int l=strlen(str);

    //Iterating each character through for loop.
    for (int i= 0;i<l;i++)
    {
        if (str[i] == '+')
        {
            sum=sum+(a+b);
        }
            if(str[i] == '*'){
              sum=sum+(a*b);

            }
        }

    printf("%d", sum);
    return 0;
}
