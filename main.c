#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int opcion;
	double lado, resultado, radio, pi = 3.1416;
	double baseMenor, baseMayor, altura;
	
	do {
		printf("\nSelecciona la figura de la que quieres calcular el area: \n");
		
			printf("1. Circulo\n");
			printf("2. Triangulo\n");
			printf("3. Cuadrado\n");
			printf("4. Rectangulo\n");
			printf("5. Trapecio\n");
			printf("\nIntroduce cualquier otra cosa para cerrar el programa.\n");
			
			printf("opcion: ");
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
				break;
			case 3:
				printf("\nCuanto mide uno de sus lados? ");
				scanf("%lf", &lado);
				resultado = lado * lado;
				printf("\n----- Area = %.2lf -----\n", resultado);
				break;
			case 4:
				break;
			case 5:
				printf("\nIngrese base menor: ");
				scanf("%lf", &baseMenor);
				printf("Ingrese base mayor: ");
				scanf("%lf", &baseMayor);
				printf("Ingrese altura: ");
				scanf("%lf", &altura);
				resultado = ((baseMayor + baseMenor) * altura) / 2;
				printf("\n----- Area = %.2lf -----\n", resultado);
				break; 
		}			
	} while (opcion >= 1 && opcion <= 5);
	return 0;
}
