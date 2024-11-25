#include <stdio.h>

int main() {
    int votes[5] = {0, 0, 0, 0, 0};  // To store votes for candidates 1 to 5
    int numBallots, ballot, spoilt = 0;  // Variables for total ballots and spoilt ballots
    
    printf("Enter the number of ballots: ");
    scanf("%d", &numBallots);
    
    printf("Enter the candidate numbers (1-5) for each ballot:\n");
    for (int i = 0; i < numBallots; i++) {
        scanf("%d", &ballot);
        
        if (ballot >= 1 && ballot <= 5) {
            votes[ballot - 1]++;  // Increment the corresponding candidate's vote count
        } else {
            spoilt++;  // Count as a spoiled ballot
        }
    }
    
    printf("\nResults of the election:\n");
    for (int i = 0; i < 5; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }
    
    printf("Spoilt ballots: %d\n", spoilt);
    
    return 0;
}