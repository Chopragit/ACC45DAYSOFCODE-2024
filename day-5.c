#include <stdio.h>

int main() {
 int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        long long P, Q, R, S;
        // Read profits for companies A, B, C, D
        scanf("%lld %lld %lld %lld", &P, &Q, &R, &S);
        
        // Check for monopoly conditions
        if (P > (Q + R + S) || Q > (P + R + S) || R > (P + Q + S) || S > (P + Q + R)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;

}

