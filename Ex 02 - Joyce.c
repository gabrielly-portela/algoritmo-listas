#include <stdio.h>
#include <stdlib.h>

//faca um programa q leia dois numeros e mostre o maior deles. Se, por acaso, os dois numeros forem iguais, imprima a mensagem Numero igual.

int main() {
	
	int numero1, numero2;
	
	printf ("Escreva o numero 1: ");
	scanf ("%d", &numero1);
	
	printf ("Escreva o numero 2: ");
	scanf ("%d", &numero2);
	
	if (numero1==numero2){
		system("cls");
		printf("\n\tNumero igual\n\t");
	
	} else 	if (numero1 > numero2){
		system("cls");
		printf ("\n\tNumero 1 = %d \n\tMaior que numero 2 = %d\n", numero1, numero2);
	} else {
		system("cls");
		printf ("\n\tNumero 2 = %d \n\tMaior que numero 1 = %d\n", numero1, numero2);
	}
		
		
		
		
	return 0;
}                                                                                                                      
