#include <stdio.h>
#include <string.h>

// int string_length (char arr[]);

// int main (void) {
//     char name[100];
//     printf("Enter your name: ");
//     fgets(name, 100, stdin);
    
    
//     int length = string_length(name);
//     if (length > 0 && name[length-1] == '\n') {
//         name[length-1] = '\0';
//         length--;
//     }
//     printf("%d", length);
// }

// int string_length (char arr[]) {
//     int n = 0;
//     while (arr[n] != '\0') {
//         n++;
//     }
//     return n;
// }

int main (void) {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    if (name[strlen(name)-1 == '\n']) {
        name[strlen(name)-1]  = '\0';       //strlen() ignores the null terminator('\0) but does not ignore newline character('\n), so replaced newline by null
    }
    printf("%d", strlen(name));
}