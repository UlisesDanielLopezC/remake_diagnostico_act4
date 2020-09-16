#include<stdio.h>

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

int main(){

    char op;

    do{
        printf("1) Capturar enteros.\n");
        printf("2) Mostrar cadena n veces.\n");
        printf("3) Agregar personajes.\n");
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
            break;

            case '3':
            break;

            default:
            break;
        }

    }while(op != '0');

    return 0;
}