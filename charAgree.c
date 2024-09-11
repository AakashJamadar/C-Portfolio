#include <stdio.h>

int main(void)
{
    char c;
    printf("Do you agree?('y' for yes and 'n' for no)");
    scanf("%c",&c);

    if(c=='y' || c=='Y'){
        printf("You agreed\n");
    }else if(c=='n' || c=='N'){
        printf("You did not agree\n");
    }
}