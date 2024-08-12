#include <iostream>
#include <string.h>


struct PARCIAL {
	int campo1;
	int campo2;
	
};
// DECLARACION DE FUNCIONES // 
void lecturadecampos(struct PARCIAL *p); 
struct PARCIAL intercambio (struct PARCIAL p);

int main(int argc, char** argv) {
	struct PARCIAL p ; 
	
	lecturadecampos(&p);
	
	printf("los valores inciales son %d y %d " , p.campo1 , p.campo2);
	p=intercambio (p); // asignar el nuevo resultado // 
	
	printf("los valores finales son %d y %d " , p.campo1 , p.campo2);
	
	return 0;
}

//FUNCIONES//
void lecturadecampos(struct PARCIAL *p){
	printf("ingrese primer valor");
	scanf("%d" , &p->campo1);
	
	printf("ingrese segundo valor"); 
		scanf("%d" , &p->campo2);
}

struct PARCIAL intercambio (struct PARCIAL p){
	int aux ; 
	aux=p.campo1;
	p.campo1=p.campo2; 
	p.campo2=aux; 
	
	return p ; 
	
}
