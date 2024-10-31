#include <stdio.h>

void determine_serves(int T) {
    for (int i = 0; i < T; i++) {
        int P, Q;
        scanf("%d %d", &P, &Q);
        
        int total_points = P + Q;
        int position = total_points % 4;

        if (position == 0 || position == 1) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    determine_serves(T);
    return 0;
}
