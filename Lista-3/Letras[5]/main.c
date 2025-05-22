#include <stdio.h>







int main()

{ 
  int repete,i,j=0,v=0,c=0;
  char  palavra [100000];
  scanf("%d",&repete);
  getchar();
  for(i = 0;i<repete;i++){
    fgets(palavra,100000,stdin);
    j=0;
    while(palavra[j]!='\0'){
      if(palavra[j]=='a'|| palavra[j]=='e' || palavra[j] == 'o' || palavra[j] == 'i' || palavra[j] == 'u' || palavra[j] == 'A' || palavra[j] == 'E' || palavra[j] == 'I' || palavra[j] == 'O' || palavra[j] == 'U'){
        
        v++;
      }
      else if(palavra[j] >= 97 && palavra[j] <= 122 || (palavra[j] >= 65 && palavra[j]<= 90)){
        c++;
      }

      j++;
      
    }
    printf("Letras = %d\n",c+v);
    printf("Vogais = %d\n",v);
    printf("Consoantes = %d\n",c);
    
    c = 0;
    v = 0;

  
  }
  

  return 0;

}