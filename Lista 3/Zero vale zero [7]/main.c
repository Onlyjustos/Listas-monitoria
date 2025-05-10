#include<stdio.h>
#include<stdlib.h>

 
int main(void)
{
   int i=0,M[200],N[200],j=0,k=0,l=0,h=0;
   char buffer2[200];
   char buffer[200];
   
   while(1){
      scanf("%d",&M[l]);
      scanf("%d",&N[l]);
      /* Formata os dados */
      if(M[l]==0&&N[l]==0){
         break;
      }
      l++;
      
   }
   for(h=0;h<l;h++){
      sprintf(buffer, "%d", M[h]+N[h]);
      
   
      while(buffer[i]!='\0'){
         if(buffer[i] != '0'){
            buffer2[k] = buffer[i];
            k++;
            
         }
         
         i++;
      }
      k=0;
      i=0;
      printf("%s\n",buffer2);
      for(j = 0;j<50;j++){
         buffer2[j] = '\0';
      }
   }
   
   
   
   //printf("string:\n%s\ncharacter count = %d\n", buffer, j);
}