#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of bits taken by the program
        scanf("%d", &N);
        
        // Check if N is a positive multiple of 4
        if (N > 0 && N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }
    
    return 0;
}
