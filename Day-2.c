#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3); // Read the states of the bottles
        
        // Count how many bottles are empty (0)
        int empty_count = (B1 == 0) + (B2 == 0) + (B3 == 0);
        
        // Check the condition and print the appropriate message
        if (empty_count >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

    return 0; 

}

