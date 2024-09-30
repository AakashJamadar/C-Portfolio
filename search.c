#include <stdio.h>
#include <string.h>

/*
int main(void) {
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < 7; i++) {
        if (numbers[i] == n) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
*/

// Same using the string array

int main(void) {
    char games[7][20] = {"coc", "subway surfers", "temple run", "pubg", "bounce tales", "diamond rush", "Where's my water"};

    char game[20];
    printf("Enter a game name: ");
    fgets(game, 20, stdin);

    game[strcspn(game, "\n")] = '\0';  // searches the first string to find the first occurance of any character from 2nd string 
                                       // and returns the nof characters scanned in first string excluding the first occurance of the searched character
    for (int i = 0; i < 7; i++) {
        if (strcmp(games[i], game) == 0) {      // compares 2 strings and returns 0 if both strings are identical and -1 / 1 in other cases
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}