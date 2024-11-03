#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int player1_score = 0, player2_score = 0;
    int max_lead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int Si, Ti;
        scanf("%d %d", &Si, &Ti);

        player1_score += Si;
        player2_score += Ti;

        int current_lead;
        if (player1_score > player2_score) {
            current_lead = player1_score - player2_score;
            if (current_lead > max_lead) {
                max_lead = current_lead;
                winner = 1;
            }
        } else {
            current_lead = player2_score - player1_score;
            if (current_lead > max_lead) {
                max_lead = current_lead;
                winner = 2;
            }
        }
    }

    printf("%d %d\n", winner, max_lead);
    return 0;
}
