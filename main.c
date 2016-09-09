#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{

    int opcion=0, flag = 0;

    float primerOperando=0, segundoOperando=0, resultado=0;

    do{
        system("cls");

        // Tomo la opcion de la funcion menu
        opcion = menu(primerOperando, segundoOperando);

        // Valido en la primera vuelta solamente que se hayan tomado los operando
        if(opcion > 2 && flag == 0){
            if(opcion != 9 && flag == 0){
                printf("Error!\n");
                printf("Antes de realizar alguna operacion deberia ingresar ambos operando.\n");
                primerOperando = ingresoOperando(1);
                segundoOperando = ingresoOperando(2);
                opcion = 0;
                flag = 1;
            }
        }

        switch(opcion)
        {
            case 1:
                primerOperando = ingresoOperando(1);
                break;
            case 2:
                segundoOperando = ingresoOperando(2);
                flag = 1;
                break;
            case 3:
                resultado = suma(primerOperando, segundoOperando);
                mostrarResultado(resultado, 's');
                system("pause");
                break;
            case 4:
                resultado = resta(primerOperando, segundoOperando);
                mostrarResultado(resultado, 'r');
                system("pause");
                break;
            case 5:
                resultado = division(primerOperando, segundoOperando);
                mostrarResultado(resultado, 'd');
                system("pause");
                break;
            case 6:
                resultado = multiplicacion(primerOperando, segundoOperando);
                mostrarResultado(resultado, 'm');
                system("pause");
                break;
            case 7:
                resultado = factorial(primerOperando);
                mostrarResultado(resultado, 'f');
                system("pause");
                break;
            case 8:
                resultado = suma(primerOperando, segundoOperando);
                mostrarResultado(resultado, 's');
                resultado = resta(primerOperando, segundoOperando);
                mostrarResultado(resultado, 'r');
                resultado = division(primerOperando, segundoOperando);
                mostrarResultado(resultado, 'd');
                resultado = multiplicacion(primerOperando, segundoOperando);
                mostrarResultado(resultado, 'm');
                resultado = factorial(primerOperando);
                mostrarResultado(resultado, 'f');
                system("pause");
                break;
            case 9:
                salir();
                break;
        }

    }while(opcion != 9);


    return 0;
}
