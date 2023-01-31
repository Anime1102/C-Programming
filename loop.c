#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i,n,sum=0;
   scanf("%d",&n);
   printf("\nThe first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum=sum+i;
   }
   printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);

}
