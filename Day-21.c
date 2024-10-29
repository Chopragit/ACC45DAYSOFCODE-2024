#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, K; // Number of minions and the value K
        scanf("%d %d", &N, &K);
        
        int count = 0; // Count of Wolverine-like minions
        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic);
            // Check if (characteristic + K) is divisible by 7
            if ((characteristic + K) % 7 == 0) {
                count++;
            }
        }
        printf("%d\n", count); // Output the count for the test case
    }

    return 0;
}
