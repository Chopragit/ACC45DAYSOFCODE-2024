#include <stdio.h>

int minimum_bags_needed(int N, int K, int M) {
    // Calculate capacity per bag
    int capacity_per_bag = K * M;
    // Calculate the number of bags needed
    return (N + capacity_per_bag - 1) / capacity_per_bag; // Ceiling division
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M);
        int result = minimum_bags_needed(N, K, M);
        printf("%d\n", result);
    }
    
    return 0;
}
