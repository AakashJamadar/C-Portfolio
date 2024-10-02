#include <stdio.h>
#include <string.h>

int main(void) {
    char names[3][20] = {"Aakash", "Raman", "Zulia"};
    char numbers[3][20] = {"+919876543210", "+911234567890", "+910123456789"};

    char name[20];
    printf("Enter your name: ");
    int i;
    for (i = 0; i < 19; i++) {
        char ch;
        scanf("%c", &ch);
        if (ch == '\n') {
            break;
        }
        name[i] = ch;
    }
    name[i] = '\0';
    for (int i = 0; i < 3; i++) {
        if (strcmp(names[i], name) == 0) {
            printf("Found: %s", numbers[i]);
            return 0;
        }
    }
    printf("Not found.\n");
}