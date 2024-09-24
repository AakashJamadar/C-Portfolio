#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main (void) {
    char name[100];
    printf("Before: ");
    fgets(name, sizeof(name), stdin);
    printf("After : ");

    for (int i = 0, n = strlen(name); i < n; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            printf("%c", name[i] - ('a' - 'A'));
        } else {
            printf("%c", name[i]);
        }
    }
}


/*
int main (void) {
    char name[100];
    printf("Before: ");
    fgets(name, sizeof(name), stdin);
    printf("After : ");
    for (int i = 0, n =strlen(name); i < n; i++) {
        printf("%c", toupper(name[i]));
    }
}
*/