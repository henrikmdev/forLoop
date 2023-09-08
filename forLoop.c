#include <stdio.h>

int main() {
    double testScores[4] = {60, 78, 80, 76};
    double averageTestScore = 0;
    printf("\nFor Loop tutorial\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", i);
        averageTestScore = averageTestScore + testScores[i];
    }
    averageTestScore = averageTestScore/4;
    printf("\nThe average score is: %lf\n", averageTestScore);
    return 0;
}