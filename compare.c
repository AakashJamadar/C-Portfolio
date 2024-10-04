#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char *s1;
    int size = 20;
    s1 = (char *)malloc(size*sizeof(char));
    printf("Enter a string s1: ");
    fgets(s1, size, stdin);
    s1[strcspn(s1,"\n")] = 0;

    char *s2;
    s2 = (char *)malloc(size*sizeof(char));
    printf("Enter a string s2: ");
    fgets(s2, size, stdin);
    s2[strcspn(s2, "\n")] = 0;

    if (strcmp(s1, s2) == 0) {  // When we compare 2 strings in c uisng ==, it compares the addresses of both, so we use strcmp which actually compares the characters
        printf("Same\n");
    } else {
        printf("different\n");
    }

    free(s1);
    free(s2);
}
