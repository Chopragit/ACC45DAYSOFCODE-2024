#include <stdio.h>

const char* can_wear_glove(int N, int fingers[], int sheaths[]) {
    int front = 1, back = 1;

    // Check front orientation
    for (int i = 0; i < N; i++) {
        if (fingers[i] > sheaths[i]) {
            front = 0;
            break;
        }
    }

    // Check back orientation
    for (int i = 0; i < N; i++) {
        if (fingers[i] > sheaths[N - 1 - i]) {
            back = 0;
            break;
        }
    }

    if (front && back) {
        return "both";
    } else if (front) {
        return "front";
    } else if (back) {
        return "back";
    } else {
        return "none";
    }
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of fingers

        int fingers[N], sheaths[N];

        // Read the lengths of fingers
        for (int i = 0; i < N; i++) {
            scanf("%d", &fingers[i]);
        }

        // Read the lengths of sheaths
        for (int i = 0; i < N; i++) {
            scanf("%d", &sheaths[i]);
        }

        // Determine the output based on finger and sheath lengths
        const char* result = can_wear_glove(N, fingers, sheaths);
        printf("%s\n", result); // Output the result for the test case
    }

    return 0;
}
