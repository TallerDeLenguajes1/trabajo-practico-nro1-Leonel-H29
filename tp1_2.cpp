#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void cuadrado(int num);
void invertir(int a, int b);
void f_ordenada(int a, int b);
int main(){
	int num=4;
	int result;
	int a, b;
	/*Punto 1*/
	result = pow(num,2);
	printf("1) El Cuadrado del numero es: %d\n", result); 
	/*Punto 2*/
	cuadrado(num);
	/*Punto 4*/
	printf("--Elija en primer numero: ");
	scanf("%d", &a);
	fflush(stdin);
	printf("--Elija en segundo numero: ");
	scanf("%d", &b);
	fflush(stdin);
	invertir(a, b);
	/*Punto 5*/
	f_ordenada(a,b);
	return 0;
}
void cuadrado(int num){
	int result;
	result = pow(num,2);
	printf("2) El Cuadrado del numero es: %d\n", result);
	/*Punto 3*/
	printf("3) Direccion de memoria de la variable: %p\n", &num);
	printf("   Contenido de la variable: %d\n", num);
}
void invertir(int a, int b){
	int aux1, aux2;
	aux1 = a;
	aux2 = b;
	a = aux2;
	b = aux1;
	printf("4) Valores invertidos: \nPrimero:%d\nSegundo:%d\n", a,b);
}

void f_ordenada(int a, int b){
	if(a > b){
		printf("5) Forma ordenada: \nPrimero:%d\nSegundo:%d\n", a,b);
	}
	else if(a < b){
		printf("5) Forma ordenada: \nPrimero:%d\nSegundo:%d\n", b,a);
	}
	else printf("5) Forma ordenada: \nPrimero:%d\nSegundo:%d\n SON IGUALES", a,b);
}
