#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num = 42;
    char c= 'R';
    
    printf("valor de num: %d \n", num);
    printf("Endereco de num: %d \n\n", &num);
    
    printf("valor de c: %c \n", c);
    printf("Endereco de c: %d \n\n", &c);                 
    
    
      
  system("PAUSE");	
  return 0;
}
