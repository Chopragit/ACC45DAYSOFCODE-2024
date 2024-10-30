#include <stdio.h>
#include <math.h>

int main() {
    int T, A, B, K;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &A, &B, &K);

        int distance = abs(B - A);
        int steps = distance / K;
        steps += (distance % K > 0);

        printf("%d\n", steps);
    }

    return 0;
}