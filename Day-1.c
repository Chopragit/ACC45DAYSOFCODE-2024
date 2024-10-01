#include <stdio.h>

int main(){
    #include <stdio.h>

    int A, B, C, X;
    
    // Read the input values
    scanf("%d %d %d %d", &A, &B, &C, &X);
    
    // Check if X matches any of A, B, or C
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}




