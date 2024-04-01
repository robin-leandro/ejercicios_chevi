#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

int main() {

	int horas = 0;
	int minutos = 0;
	int segundos = 0;

	// scanf lee el numero de inputs
	while(scanf("%d:%d:%d", &horas, &minutos, &segundos) == 3){
		minutos = minutos + (segundos/60);
		horas = horas + (minutos/60);

		segundos = segundos % 60;
		minutos = minutos % 60;

		printf("%02d:%02d:%02d", horas, minutos, segundos);
	}
	return EXIT_SUCCESS;

}