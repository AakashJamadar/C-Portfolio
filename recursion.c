#include <stdio.h>

void draw (int n);

int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    draw(num);
}

void draw (int n) {
    if (n <= 0) {
        return;
    }
    draw(n-1);
    for (int i = 0; i < n; i++) {
        printf("* ");
    }
    printf("\n");
}