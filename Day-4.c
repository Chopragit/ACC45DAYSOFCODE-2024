#include <stdio.h>

int main() {
  int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X; // Starting time
        scanf("%d", &X);

        // Check if Janmansh can complete his assignments on time
        if (X <= 7) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}

