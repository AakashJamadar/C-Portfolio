#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    char s[20];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);  // fgets also holds the neline character from the input(from enter key), so it prints strlen inlcuding the \n
    
    int n =strlen(s);
    // printf("%d\n", n);
    printf("Length of the string before replacing newline character: %d\n", n);
    if(n > 0 && s[n-1] == '\n') {
        s[n-1] = 0;
        printf("Replaced newline character with null terminator\n");
    }
    printf("Length of the string after replacing newline character: %d\n", strlen(s));
    char *str = malloc(n + 1);  //added +1 becuase wehn we enter 20 chars fgets takes 19 chars and a \0, so n would be 19 so +1 here to store \0
    if (str == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {  // Same explanation as malloc
        str[i] = s[i];
    }
    // Can use strcpy(str, s); i,e strcpy(destinaton, source) (An inbuilt function)
    if (strlen(str) > 0) {
        str[0] = toupper(str[0]);
    }
    
    printf("s: %s\n", s);
    printf("str: %s", str);

    free(str);
}