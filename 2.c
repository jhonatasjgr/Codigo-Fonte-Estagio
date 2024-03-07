/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int primeiro = 0, segundo = 1, num , pertence=0;
   printf("Digite um numero: ");
   scanf("%d",&num);
   
   for(int i=0;primeiro<=(num*2);i++){
       printf("%d ",primeiro);
       if(num==primeiro){
           pertence = 1;
       }
       int aux = primeiro;
       primeiro += segundo;
       segundo = aux;
   }
    if(pertence==0){
        printf("...\nO numero %d não pertence à sequencia de Fibonacci",num);
    }else{
        printf("...\nO numero %d pertence à sequencia de Fibonacci",num);
    }
    return 0;
}
