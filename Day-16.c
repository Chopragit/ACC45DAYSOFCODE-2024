#include <stdio.h>

int min_attacks(int H, int X, int Y) {
    // Option 1: Normal attacks only
    int attacks_needed = (H + X - 1) / X;

    // Option 2: Using special attack once
    int remaining_health = H > Y ? H - Y : 0;
    int normal_attacks_after_special = (remaining_health + X - 1) / X;
    int total_attacks_with_special = 1 + normal_attacks_after_special;

    // Return the minimum attacks needed
    return attacks_needed < total_attacks_with_special ? attacks_needed : total_attacks_with_special;
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);
        int result = min_attacks(H, X, Y);
        printf("%d\n", result);
    }

    return 0;
}
