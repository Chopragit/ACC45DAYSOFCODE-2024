#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int a, b, c, d;
        // Read the tastiness values for ingredients A, B, C, D
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate the maximum tastiness
        int max_tastiness = a + c; // A and C
        if (a + d > max_tastiness) max_tastiness = a + d; // A and D
        if (b + c > max_tastiness) max_tastiness = b + c; // B and C
        if (b + d > max_tastiness) max_tastiness = b + d; // B and D

        // Print the result for this test case
        printf("%d\n", max_tastiness);
    }

    return 0;
}
