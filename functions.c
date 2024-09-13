// #include <stdio.h>

// void meow(int n);

// int main(void){
//    meow(6);
// }

// void meow(int n){
//     for(int i=0;i<n;i++){
//        printf("Meow!\n"); 
//     }  
// }

#include <stdio.h>

void meowNTimes(int n)
{
   for(int i=0;i<n;i++)
   {
      printf("Meow!\n");
   }
}

int main(void)
{
   int n;
   do
   {
      printf("Enter a number: ");
      scanf("%d", &n);
   }while(n<1);  
   meowNTimes(n);
}