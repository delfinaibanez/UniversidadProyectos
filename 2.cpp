#include <iostream>
#include<conio.h>

/*1) Codificar un programa que permita: 
a) Definir una estructura llamada n�meros con dos miembros tipo int.
b) Leer valores para una variable de tipo struct n�meros mediante una funci�n de
lectura que  utilice PASAJE POR REFERENCIA
c) Pasar a una funci�n la variable de tipo struct n�meros utilizando pasaje por
valor.
d) La funci�n debe retornar el menor de los dos valores recibidos.
 */
 
 struct NUMEROS { // declaracion de structura // 
 	int valor1;
 	int valor2;
 };
 
 //declaracion de funciones // 
void cargardatos(struct NUMEROS *n);
int menornumero(struct NUMEROS *n);

int main() {
	struct NUMEROS  n ; 
	int menor;
	
	cargardatos(&n);
	menor=menornumero(&n);
	
	printf("el menor numero es %d" , menor);
	
	return 0;
}

void cargardatos(struct NUMEROS *n){
	
printf("ingrese primer numero"); 
scanf("%d" , &n->valor1);  // & y ->// 
printf("ingrese segundo numero");
scanf("%d" , &n->valor2);

}

int menornumero(struct NUMEROS *n){
	if(n->valor1 < n->valor2){
		return n->valor1;
	}else{
		return n->valor2; 
	}
}
