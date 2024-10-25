#include <stdio.h>
#include <string.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of problems
        scanf("%d", &N);
        
        char contest_code[10];
        int count_start38 = 0;
        int count_ltime108 = 0;

        for (int i = 0; i < N; i++) {
            scanf("%s", contest_code); // Read the contest code
            
            // Count occurrences of each contest code
            if (strcmp(contest_code, "START38") == 0) {
                count_start38++;
            } else if (strcmp(contest_code, "LTIME108") == 0) {
                count_ltime108++;
            }
        }
        
        // Output the counts for the current test case
        printf("%d %d\n", count_start38, count_ltime108);
    }

    return 0;
}
