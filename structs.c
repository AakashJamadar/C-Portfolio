#include <stdio.h>
#include <string.h>

// Taught in CS50
typedef struct {
    char name[20];
    char number[20];
}
Person;

// General
struct Person1 {
    char name[20];
    char number[20];
};

int main(void) {
    Person people[3];

    strcpy(people[0].name, "Aakash");
    strcpy(people[0].number, "+919876543210");

    strcpy(people[1].name, "Raman");
    strcpy(people[1].number, "+911234567890");

    strcpy(people[2].name, "Zulia");
    strcpy(people[2].number, "+910123456789");

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < 3; i++) {
        if (strcmp(people[i].name, name) == 0) {
            printf("Found: %s\n",people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}