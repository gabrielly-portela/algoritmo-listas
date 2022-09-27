#include <stdio.h>
#include <stdlib.h>

//faca um programa q leia dois numeros e mostre qual deles e o maior

int main() {
	
	int numero1, numero2;
	
	printf ("Escreva o numero 1: ");
	scanf ("%d", &numero1);
	
	printf ("Escreva o numero 2: ");
	scanf ("%d", &numero2);
	
	if (numero1 > numero2){
		printf ("Numero 1 = %d \nMaior que numero 2 = %d\n", numero1, numero2);
	} else {
		printf ("Numero 2 = %d \nMaior que numero 1 = %d\n", numero1, numero2);
	}
		
		
		
		
	return 0;
}
