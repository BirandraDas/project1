
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
   int i, n, sum=0;
   printf("enter");
   scanf("%d", &n);
   int num = n;
   for(i=1; i<n; i++){
       if(n%i == 0){
           sum+=i;
       }
   }
   
   if(sum>num){
       printf("Abundant");
   }
   else{
       printf("no");
   }
    return 0;
}
