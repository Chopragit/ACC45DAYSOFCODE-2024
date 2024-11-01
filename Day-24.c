#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B, C, D;
        // Read the initial scores A and B
        scanf("%d %d", &A, &B);
        // Read the final scores C and D
        scanf("%d %d", &C, &D);
        
        // Check the conditions
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}
