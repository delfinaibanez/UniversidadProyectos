#include <iostream>
#include<conio.h>

/* 1) Codificar un programa que permita: 
a) Definir una estructura llamada números con dos miembros tipo int.

b) Leer valores para una variable de tipo struct números mediante una función de
lectura que  utilice PASAJE POR REFERENCIA

c)c se deben pasar los dos miembros de la variable
de tipo struct por separado utilizando pasaje por REFERENCIA para ambos.

d) La función debe retornar el menor de los dos valores recibidos.

 */

struct NUMEROS { // declaracion de structura // 
 	int valor1;
 	int valor2;
 };
 
 //declaracion de funciones // 
 void leernumeros(struct NUMEROS *n);
 int menornumero(int *n1 , int *n2);

int main() {
	struct NUMEROS n ;
	int menor ;
	leernumeros(&n);
	menor=menornumero(&n.valor1 , &n.valor2); // pasamos datos por valor , en la llamada al main es con . no con -> // 
	printf("el menor numero es %d " , menor );
	
	return 0;
}

// funciones 

//b// 
void leernumeros(struct NUMEROS *n){
	printf("ingrese primer valor"); 
	scanf("%d" , &n->valor1);
	printf("ingrese segundo valor ");
	scanf("%d" , &n->valor2);
}

// c// 
int menornumero(int *n1 , int *n2){
	if (*n1<*n2){
		return *n1 ; 
	}else {
		return *n2 ; 
	}
}
