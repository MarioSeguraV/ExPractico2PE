#include <stdio.h>
int media(size);

int main(){
	setbuf(stdout, NULL);
	int opcion;
	int size = 0;
	float resultado;

	printf("MENÚ: \n1)Media\n2)Moda\n3)Mediana\n4)Histograma de frecuencias\n6)Desviación estándar\n7)Varianza\n8)Dispersión\n");
	printf("\n¿Qué desea calcular? ");
	scanf("%d", &opcion);


	switch(opcion){
	    case 1:
        	printf("\n\n¿Cúantos datos planea ingresar? ");
        	scanf("%d", &size);
	 	    resultado = media(size);
	 	    printf("\n%5.2f", resultado); break;
	    default:
	        printf("en desarrollo...");
	}

	return 0;
}

int media(size){
    float suma=0, contador = 0;
    float promedio, valor;

    for(int i=0; i<size; i++){
        printf("Ingrese su dato numero %d: ", i+1);
        scanf("%f", &valor);
        suma += valor;
        contador += 1;
    }
    promedio = (suma/contador);
    return promedio;
}

