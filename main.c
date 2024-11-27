#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int opcion;
	double lado, resultado, radio, pi = 3.1416;
	double baseMenor, baseMayor, altura, base;
	
	do {
		printf("\t\nArea de Figuras :)\n");
		printf("Figuras de las que puedes calcular el area: \n");
		
			printf("\n1. Circulo");
			printf("\n2. Triangulo");
			printf("\n3. Cuadrado");
			printf("\n4. Rectangulo");
			printf("\n5. Trapecio");
			printf("\n6.Salir");
			printf("\nIngresa la opcion: ");
			scanf("%d", &opcion);
					
		switch(opcion) 
		{
			case 1:
				printf("\nIngrese el radio del circulo:");
				scanf(" %lf", &radio);
				resultado = pi * radio * radio;
				printf("\n----- Area = %.2lf -----\n", resultado);
				break;
			case 2:
				printf("\nIngresa la altura del triangulo: ");
				scanf(" %lf", &altura);
				printf("Ingresa la base del triangulo: ");
				scanf(" %lf", &base);
				
				printf("Realizando calculos...");
				resultado = (altura * base) / 2;
				printf("\n----- Area = %.2lf -----\n", resultado);
				
				
				break;
			case 3:
				printf("\nCuanto mide uno de sus lados? ");
				scanf(" %lf", &lado);
				resultado = lado * lado;
				printf("\n----- Area = %.2lf -----\n", resultado);
				break;
			case 4:
				break;
			case 5:
				printf("\nIngrese base menor: ");
				scanf(" %lf", &baseMenor);
				printf("Ingrese base mayor: ");
				scanf(" %lf", &baseMayor);
				printf("Ingrese altura: ");
				scanf(" %lf", &altura);
				resultado = ((baseMayor + baseMenor) * altura) / 2;
				printf("\n----- Area = %.2lf -----\n", resultado);
				break; 
			case 6:
				printf("\nSaliendo del programa...\nChao bai :)\n");
				break;
			default:
				printf("\nOpcion no valida. Por favor ingresa un numero entre 1 y 6.");
				break;
				
		}			
	} while (opcion >= 1 && opcion <= 5);
	return 0;
}

