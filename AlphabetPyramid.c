
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include <stdio.h>

int main()
{
     int i,n,j;
     printf("Enter number:");
     scanf("%d", &n);
     
     for(i=1; i<=n; i++){
         for(j=0; j<i; j++){
            printf("%c ", 'A' + j);
         }
         printf("\n");
     }

    return 0;
}