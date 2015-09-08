#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "PORTUGUESE");
	int temperatura;
	printf ("Digite o valor da Temperatura: ");
	scanf ("%i", &temperatura);
	if(temperatura < 20){
		printf("A temperatura %iG e considerada FRIA!", temperatura);
	} else {
		if(temperatura > 30){
			printf("A temperatura %iG e considerada QUENTE!", temperatura);
		} else {
			printf("A temperatura %iG e considerada AGRADAVEL!", temperatura);			
		}	
	}
	return 0;
}