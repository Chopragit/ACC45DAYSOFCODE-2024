#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        int C = 21 - (A + B);  // Calculate the third number needed
        
        // Check if the third number C is between 1 and 10
        if (C >= 1 && C <= 10) {
            printf("%d\n", C);  // If valid, print the third number
        } else {
            printf("-1\n");  // If invalid, print -1
        }
    }
    
    return 0;
}
