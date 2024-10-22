#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int R1, R2, R3, R4; // Referee decisions
        scanf("%d %d %d %d", &R1, &R2, &R3, &R4); // Read decisions

        // Check if all referees consider the ball to be inside limits
        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }

    return 0;
}
