#include <stdio.h>
#include <string.h>


int main (void) {
    // char arr[44] = "HI!";
    // printf("%c %c %c", arr[0], arr[1], arr[2]);

    char words[2][4] = {"HI!", "BYE!"};
    printf("%c %c %c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c %c %c %c", words[1][0], words[1][1], words[1][2], words[1][3]);
}