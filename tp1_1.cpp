#include <stdio.h>
#include <stdlib.h>
int main(){
	int num=20;
	int *punt;

	punt=&num;

	printf("Contenido del puntero: %d\n",*punt);
	printf("Direccion de memoria almacenada en el puntero: %p\n", punt);
	printf("Direccion de memoria de la variable: %p\n", &num);
	printf("Direccion de memoria del puntero: %p\n", &punt);
	printf("El tamanio de memoria en bytes del puntero: %d\n", sizeof(punt));

	return 0;
}
/*
*) En los puntos 2 y 3 dan el mismo resultado ya que, en el puntero almacena la direccion de memoria de la variable.
   En el punto 2 pido que me muestre la direccion de memoria de la variable que esta contenida dentro del puntero
   En el punto 3 antes del nombre de la variable utilizo el operador & lo cual me mostrara la direccion de memoria
*) En el punto 4 lo que le pido es la direccion de memoria del puntero que no es la misma que de la variable

*/
