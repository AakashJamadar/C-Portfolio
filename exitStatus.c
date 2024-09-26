#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Missing comamnd-line argument\n");
        return 1132;
    } else {
        printf("Hello %s", argv[1]);
        return 0;
    }
}