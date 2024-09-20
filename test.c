#include <stdio.h>

int main (void) {
    
    const int N = 3;
    int scores[N];

    for (int i = 0; i < N; i++) {
        printf("Enter the marks of subject %d: ", i+1);
        scanf("%d",&scores[i]);
    }
    
    float avg = (scores[0] + scores[1] + scores[2])/(float)3;
    printf("Average of scores is: %f", avg);
}