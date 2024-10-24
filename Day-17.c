#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of terms in the polynomial
        scanf("%d", &N);
        
        int coefficients[N];
        
        // Read the coefficients
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }
        
        // Find the degree of the polynomial
        int degree = -1; // Initialize degree
        for (int i = 0; i < N; i++) {
            if (coefficients[i] != 0) {
                degree = i; // Update degree if coefficient is non-zero
            }
        }
        
        // Print the degree of the polynomial
        printf("%d\n", degree);
    }
    
    return 0;
}

