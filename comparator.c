#include <stdio.h>

int main(void){
    int x,y;
    // printf("Enter a number x: ");
    // scanf("%d", &x);

    // printf("Enter another number y: ");
    // scanf("%d", &y);

    // Another way
    printf("Enter 2 numbers x and y: ");

    scanf("%d %d", &x, &y);

    if(x<y){
        printf("x is lesser than y\n");
    }else if(x>y){
        printf("x is greater than y\n");
    }else{
        printf("x is equal to y\n");
    }
}