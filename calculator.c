#include <stdio.h>
#include <stdbool.h>


// int main(void){
//     int dollars = 1;

//     while(true){
//         char ch;
//         printf("Choose whether to double it and give it to next person(y/n):%i \n",dollars);
//         scanf("%c", &ch);

//         if(ch == 'y'){
//             dollars *=2;
//         }else if(ch == 'n'){
//             break;
//         }else{
//             printf("Invalid input.Please enter 'y or 'n\n");
//         }
//     }
// }

int main(void){
    int x;
    int y;
    printf("Enter a number x and another number y: ");
    scanf("%d %d", &x, &y);

    printf("%5.1f", (float)x/y);
}