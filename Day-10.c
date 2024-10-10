#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // X: number of problems submitted, Y: number of approved problems
        scanf("%d %d", &X, &Y);

        // Check if Munchy is an expert
        if (2 * Y >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
