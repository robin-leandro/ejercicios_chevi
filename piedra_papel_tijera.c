#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 1 si gana el 1, 2 si gana el 2, 0 si es empate
int ganador(char player1, char player2){
	if(player1 == player2){
		return 0;
	} 
	if(player1 == 'R'){
		if (player2 = 'P'){
			return 2;
		} 
		return 1;
	}
	if(player1 == 'P') {
		if(player2 == 'R'){
			return 1;
		}
		
		return 2;
	}
	if(player1 == 'S'){
		if(player2 == 'R'){
			return 2;
		}
		return 1;
	} 
	return -1;
}

int main() {

	char player1 = '\0';
	char player2 = '\0';
	int jugadas = 0;
	int wins1 = 0;
	int wins2 = 0;
	int empates = 0;

	while(scanf("\n%c %c", &player1, &player2) != EOF) {
		int error = 0;
		if(player1 != 'P' && player1 != 'S' && player1 != 'R'){
			printf("invalid shape: %c\n", player1);
			error = 1;
		}
		if(player2 != 'P' && player2 != 'S' && player2 != 'R'){
			printf("invalid shape: %c\n", player2);
			error = 1;
		}
		if (error) continue;
		jugadas++;
		int winner = ganador(player1, player2);
		if(winner == 0){
			empates++;
		} else if(winner == 1){
			wins1++;
		} else {
			wins2++;
		}
	}
	printf("Player1: %d %.0lf%%\n", wins1, (double)wins1 * 100 / jugadas);
	printf("Player2: %d %.0lf%%\n", wins2, (double)wins2 * 100 / jugadas);
	printf("Draws: %d %.0lf%%\n", empates, (double)empates * 100 / jugadas);
	printf("Total: %d 100%%\n", jugadas);
	if(wins1 > wins2) {
		printf("Winner: Player1");
	} else if(wins1 < wins2) {
		printf("Winner: Player2");
	} else {
		printf("Draw");
	}

	return 0;

}
