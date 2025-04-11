
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
   int i, j, m, n, sum1=0, sum2=0;
   printf("enter");
   scanf("%d", &n);
   scanf("\n%d", &m);
   for(i=1; i<n; i++){
       if(n%i == 0){
           sum1+=i;
       }
   }
    for(j=1; j<m; j++){
       if(m%j == 0){
           sum2+=j;
       }
   }
   
   if(sum1 == m && sum2 == n){
       printf("Amicable");
   }
   else{
       printf("no");
   }
    return 0;
}
