#include <stdio.h>

int main() {
   
    int player1_score, player2_score;

   
    printf("Enter the score for Player 1: ");
    scanf("%d", &player1_score);

   
    printf("Enter the score for Player 2: ");
    scanf("%d", &player2_score);

   
    if (player1_score > player2_score) {
        
        printf("The highest score is: %d (Player 1)\n", player1_score);
    } else if (player2_score > player1_score) {
       
        printf("The highest score is: %d (Player 2)\n", player2_score);
    } else {
        
        printf("The scores are tied at: %d\n", player1_score);
    }

   
    return 0;
}
