#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int opcion;
	double lado, resultado;
do {


	printf("Selecciona la figura de la que quieres calcular el area: \n");
	
		printf("1. Circulo\n");
		printf("2. Triangulo\n");
		printf("3. Cuadrado\n");
		printf("4. Rectangulo\n");
		printf("5. Trapecio\n");
		printf("introduce cualquier otra cosa para cerrar el programa.\n");
		
			printf("opcion: ");
				scanf("%d", &opcion);
				
	switch(opcion) 
	{
		case 1:
			
			
		case 2:
			
			
		case 3:
				printf("Cuanto mide uno de sus lados? ");
					scanf("%lf", &lado);
						resultado = lado * lado;
				printf("----- Area = %.2lf -----\n", resultado);
			break;
			
		case 4:
			
			
		case 5:
			
			
	}			
} while (opcion >= 1 && opcion <= 5);

	return 0;
}
