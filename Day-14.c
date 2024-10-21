#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);  // Read N, X, and Y

        // Check the two conditions
        if (Y <= N * X && Y % X == 0) {
            printf("YES\n");  // Chef can achieve exactly Y marks
        } else {
            printf("NO\n");   // Chef cannot achieve exactly Y marks
        }
    }

    return 0;
}
