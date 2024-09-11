#include <stdio.h>
#include <string.h>

int main(void){
    char name[100];
    printf("What's your name? ");
    // scanf("%s",name);
    // To take the full name as Input
    fgets(name, sizeof(name), stdin);
    printf("Hello,%s ",name);
}