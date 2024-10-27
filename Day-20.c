#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int a, b, c, d;
        // Read the tastiness values for each ingredient
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        // Calculate the maximum tastiness possible
        int max_tastiness = a + c;  // A + C
        if (a + d > max_tastiness) max_tastiness = a + d;  // A + D
        if (b + c > max_tastiness) max_tastiness = b + c;  // B + C
        if (b + d > max_tastiness) max_tastiness = b + d;  // B + D

        // Output the result
        printf("%d\n", max_tastiness);
    }

    return 0;
}
