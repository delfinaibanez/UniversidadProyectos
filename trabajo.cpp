#include <iostream>
#include<conio.h>

/*) Codificar un programa que permita:
a) Definir una estructura llamada n�meros con dos miembros tipo int.
b) Leer valores para una variable de tipo struct n�meros mediante una funci�n de
lectura que no utilice pasaje por referencia.
c) Pasar a una funci�n la variable de tipo struct n�meros utilizando pasaje por
valor.
c) La funci�n debe retornar el menor de los dos valores recibidos. */
// declaramos estructura //
struct NUMEROS {
	int valor1; 
	int valor2;
};
 // DECLARACIONES DE FUNCION // 
struct NUMEROS leernumeros();
int menornumero(struct NUMEROS n);


int main() {
	int menor;
	struct NUMEROS n =leernumeros(); //lamada a la funci�n para leer los n�meros y asignarlos a la vaiable// 
	 menor=menornumero( n); 
	 printf("el menor de los dos numeros es : %d" , menor); 
	return 0;
}

struct NUMEROS leernumeros(){ // CUANDO TENEMOS QUE CARGAR LOS VALORES POR VALOR DEBEMOS REALIZAR UNA FUNCION //
	NUMEROS n; //asignamos variable/ objeto  a la estructura , // 
	printf("ingrese primer numero");
	scanf("%d" , &n.valor1);
	printf("ingrese segundo valor");
	scanf("%d" , &n.valor2);
	
	return n ; 
}
int menornumero(struct NUMEROS n){
	if(n.valor1>n.valor2){
		return n.valor2;
	}else{
		return n.valor1; 
	}
}
