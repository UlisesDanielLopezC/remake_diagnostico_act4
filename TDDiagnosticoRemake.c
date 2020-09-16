#include<stdio.h>
#include"personaje.h"

void capturarINT(){
    int enteros[5];
    float suma=0, promedio;

    for(size_t i = 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%i",&enteros[i]);
    }
    printf("\n");
    for(size_t i = 0; i < 5; i++){
        printf("[%i] ",enteros[i]);
    }
    printf("\n\n");

    for(size_t i = 0; i < 5; i++){
        suma = suma + enteros[i];
    }
    promedio = suma/5;

    printf("Suma: %.0f\n",suma);
    printf("Promedio: %.2f\n\n",promedio); getchar();
}

void mostrar(int n, char cadena[]){

    for (size_t i = 0; i < n; i++){
        printf("%s",cadena);
    }
    printf("\n"); getchar();

}

int main(){

    char op, cadena[20];
    int n;

    do{
        printf("1) Capturar enteros.\n");
        printf("2) Mostrar cadena n veces.\n");
        printf("3) Agregar personajes.\n");
        printf("4) Mostrar personajes.\n");
        printf("0) Salir.\n\n");
        printf("OPCION: ");
        scanf("%c",&op);
        fflush(stdin);
        printf("\n");

        switch(op){
            case '1':
                capturarINT();
            break;

            case '2':
                printf("Escribe una cadena de hasta 20 caracteres: ");
                fflush(stdin);
                fgets(cadena, sizeof(cadena), stdin);
                printf("\nn: ");
                scanf("%i",&n);
                mostrar(n, cadena);
            break;

            case '3':
                capturar_pers();
            break;

            case '4':
                mostrar_pers();
            break;

            default:
            break;
        }

    }while(op != '0');

    return 0;
}