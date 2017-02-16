#include <stdio.h>
#include <stdlib.h>

int main (void) {
   char op;
   int c, l, n=0, k=10;
   double media, soma=0, m[20][20];

   scanf(" %c",&op);

   for (l = 0; l < 12; l++){
      for(c = 0; c < 12; c ++){
      scanf("%lf",&m[l][c]);
         }
      }
   k=10;
   for(l=0;l<=4;l++){

      for(c=l+1;c<=k;c++){
         soma=soma+m[l][c];
         n++;
      }
      k--;
   }



   if(op=='S'){
      printf ("%.1lf\n",soma);
   }
   else
      if(op=='M'){
         media=soma/n;
         printf("%.1lf\n",media);
      }
   return 0;
   }

