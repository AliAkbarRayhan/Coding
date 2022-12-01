
   /*
   You are given a positive even integer N. You want to divide the value among 3 people such that every person get the same amount. If it is not possible to give same amount to 3 people, print -1 otherwise print the amount.

Input Format

You will be given a positive integer N.
Constraints

1 <= N <= 10^9
Output Format

Print how much amount everyone will get.
Sample Input 0

12
Sample Output 0

4

Enter your code here. Read input from STDIN. Print output to STDOUT */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int n,div;
    scanf("%ld",&n);
    if(n%3==0){
       div=n/3;
      printf("%ld",div);
      }
      else{
        printf("-1");

    }

}
