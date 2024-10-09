#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Read N and X
        
        // Calculate the number of face-down cards
        int face_down = N - X;
        
        // Find the minimum flips required to make all cards the same
        int min_flips = (X < face_down) ? X : face_down;
        
        // Output the result
        printf("%d\n", min_flips);
    }
    
    return 0;
}
