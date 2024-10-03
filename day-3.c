#include <stdio.h>

int main() {
	 int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read the time taken for problems A and B

        // Calculate the scores for both scenarios
        int score1 = 1500 - 6 * X - 4 * Y; // Solve A first, then B
        int score2 = 1500 - 6 * Y - 2 * X; // Solve B first, then A

        // Find the maximum score
        int max_score = score1 > score2 ? score1 : score2;

        // Print the result for the current test case
        printf("%d\n", max_score);
    }

    return 0;

}

