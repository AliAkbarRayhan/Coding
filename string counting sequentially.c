
   /*  7 + + - + - - - ,*/
   #include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
int count=1;
int max=1;
int i;
for(i=1;i<=strlen(str);i++){
 if(str[i]==str[i-1]){
    count++;
 }
 else{
    count=1;
 }


    if(count>max){
   max=count;
 }

}

printf("%d",max);

}
