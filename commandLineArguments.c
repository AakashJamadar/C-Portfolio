#include <stdio.h>

int main (int argc, char *argv[]) {
    // printf("Hello %s", argv[1]);
    // printf("Hello %s %s", argv[1],argv[2]);
    // printf("Hello ");
    // for (int i = 1; i < argc; i++) {
    //     printf("%s ", argv[i]);
    // }
    // for (int i = 0; i < argc; i++) {
    //     printf("%s\n", argv[i]);
    // }
    if (argc == 2) {
        printf("Hello %s", argv[1]);
    } else {
        printf("Hello, world!");
    }
}