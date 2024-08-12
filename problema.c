#include <stdio.h>


/* Codificar un programa que permita ingresar 2 valores y una operación
matemática.
a) Validar que sólo se admitan las 4 operaciones aritméticas básicas
b) Pasar dichos valores a una única función que retorne el resultado de
efectuar la operación ingresada entre los valores dados.
 */
float suma(float n1, float n2);
float resta(float n1, float n2);
float mutiplicacion(float n1, float n2);
float division(float n1, float n2);

int main(int argc, char *argv[]) {
	float n1 , n2 ;
	float div , mult, rest, sum; 
	
	printf("calculadora \n"); 
	
	printf("ingrese n1 \n ");
	scanf("%f", &n1);
		printf("ingrese n2 \n ");
			scanf("%f", &n2);
			
	div=division(n1 , n2);
	mult= mutiplicacion( n1, n2);
	rest=resta( n1, n2);
	sum=  suma(n1 , n2);
	
	int opcion ; 
	
	printf("ingrese que operacion desea realizar (1)suma (2)resta (3)multiplicacion (4)division \n");
	scanf("%d" ,&opcion);
			
	switch(opcion){
		case 1:
			printf("%f + %f =  %f " , n1 , n2 , sum);
			break;
			 case 2:
			 		printf("%f - %f =  %f" , n1 , n2 , rest);
			 	break;
			 	case 3 :
			 			printf("%f x %f =  %f" , n1 , n2 , mult);
			 		break;
			 		case 4 : 
			 			printf("%f : %f =  %f" , n1 , n2 , div); 
			 		break;
				
	}
	
	return 0;
}

float suma(float x, float y){
	return x+y;
};

float resta(float x, float y){
	return x-y;
};

float mutiplicacion(float x ,float y){
	return x*y;
};

float division(float x , float y){
	return x/y; 
}; 
