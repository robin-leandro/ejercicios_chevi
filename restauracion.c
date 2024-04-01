#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

void swap(char palabra[]){
// 	if (strlen(palabra < 4)) {
// 		return;
// 	}

	int ultimaLetra = strlen(palabra) - 4;
	if(strlen(palabra) % 2 == 0 ) {
		ultimaLetra = strlen(palabra) - 3;
	}
	for(int i = 1; i <= ultimaLetra; i += 2){
		char pivot = palabra[i];
		palabra[i] = palabra[i+1];
		palabra[i+1] = pivot;
	}

}

int main() {
	// char palabra[] = "plabara";
	// printf("%s\n", palabra);
	// swap(palabra);
	// printf("%s\n", palabra);

	char word[50];
	char c = '\0';
	int i = 0;
	while(scanf("%c", &c) != EOF) {
		if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == ';' || c == ':') {
			swap(word);
			printf("%s%c", word, c);
			i = 0;
			word[0] = '\0';
			continue;
		}
		word[i] = c;
		word[i+1] = '\0';
		i++;
	}
	// while(scanf(" %49[^ \t.\n]%*c", word) != EOF) {
	// 	swap(word);
	// 	printf("%s ", word);

	// }





	return 0;

}