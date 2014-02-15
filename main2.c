#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int num;
    int *p=NULL;
    p= &num;
    *p=42;
    
    printf("valor de num: %d \n", num);
    printf("valor de *p: %d \n", *p);
    printf("endereco de num: %d \n", &num);
    printf("valor de p: %d \n\n", p);
    
  system("PAUSE");	
  return 0;
}
