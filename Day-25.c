#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int n;
        scanf("%d", &n);
        
        int L[n], R[n];
        
        // Read lengths
        for (int i = 0; i < n; i++) {
            scanf("%d", &L[i]);
        }
        
        // Read ratings
        for (int i = 0; i < n; i++) {
            scanf("%d", &R[i]);
        }
        
        int best_index = 0; // To store the index of the best movie (0-based)
        long long max_value = -1; // To store the maximum L[i] * R[i]
        int max_rating = -1; // To store the maximum rating for tie-breaking
        
        // Iterate through all movies to find the best one
        for (int i = 0; i < n; i++) {
            long long current_value = (long long)L[i] * R[i];
            
            // Check if we found a better option
            if (current_value > max_value || 
                (current_value == max_value && R[i] > max_rating) || 
                (current_value == max_value && R[i] == max_rating && i < best_index)) {
                
                max_value = current_value;
                max_rating = R[i];
                best_index = i; // Store the index (0-based)
            }
        }
        
        // Output the 1-based index of the best movie
        printf("%d\n", best_index + 1);
    }
    
    return 0;
}
