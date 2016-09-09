#include <stdio.h>
#include <stdlib.h>


/** Funcion que despliega el menu
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  int     - Opcion elejida
 *
 */
int menu(float nro1, float nro2){

    int opcion = 0;

    printf("Hola y bienvenido a la calculador de Federico Illane\n\n");
    printf("1. Ingresar 1er operando (A=%.2f)\n", nro1);
    printf("2. Ingresar 2do operando (B=%.2f)\n", nro2);
    printf("3. Calcular la suma (A+B)\n");
    printf("4. Calcular la resta (A-B)\n");
    printf("5. Calcular la division (A/B)\n");
    printf("6. Calcular la multiplicacion (A*B)\n");
    printf("7. Calcular el factorial (A!)\n");
    printf("8. Calcular todas las operaciones\n");
    printf("9. Salir\n\n");

    do{
        printf("Seleccione la opcion deseada:");
        scanf("%d", &opcion);
    }while(opcion < 1 || opcion > 9);

    return opcion;
}

/** Funcion que toma el operando del usuario
 *
 * \param   int     - Operando a tomar
 * \return  float   - Operando elejido
 */
float ingresoOperando(int operando){

    float numero;

    printf("Ingrese el %d operando: ", operando);

    scanf("%f", &numero);

    return numero;
}

/** Funcion que suma los 2 operandos
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  float   - Resultado de la suma
 */
float suma(float nro1, float nro2){

    return nro1 + nro2;
}

/** Funcion que resta los 2 operandos
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  float   - Resultado de la resta
 */
float resta(float nro1, float nro2){

    return nro1 - nro2;
}

/** Funcion que divide los 2 operandos
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  float   - Resultado de la division
 */
float division(float nro1, float nro2){

    while(nro2 == 0){
        printf("Error! El divisor no puede ser cero.\n");
        nro2 = ingresoOperando(2);
    }

    return nro1 / nro2;
}

/** Funcion que multiplica los 2 operandos
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  float   - Resultado de la multiplicacion
 */
float multiplicacion(float nro1, float nro2){

    return nro1 * nro2;
}

/** Funcion que saca el factorial del primer operando
 *
 * \param   float   - Operando 1
 * \return  float   - Resultado del factorial
 */
float factorial(float nro1){

    while(nro1 <= 0){
        printf("Error! No se puede sacar factoreal de un cero o numeros negativos.\n");
        nro1 = ingresoOperando(1);
    }

    float i;

    for(i=(nro1-1);i>0;i--){
        nro1 *= i;
    }

    return nro1;
}

/** Funcion que muestra los resultados de las distintas operaciones
 *
 * \param   float     - Resultado a mostrar
 * \param   char      - Operacion que se quiere mostrar
 * \return  void
 */
void mostrarResultado(float resultado, char operacion){

    switch(operacion){

        case 's':
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;

        case 'r':
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;

        case 'd':
            printf("El resultado de la division es: %.2f\n", resultado);
            break;

        case 'm':
            printf("El resultado de la multiplicacion es: %.2f\n", resultado);
            break;

        case 'f':
            printf("El resultado del factorial es: %.2f\n", resultado);
            break;

    }
}

/** Funcion que muetra un mensaje de salida.
 *
 * \param   void
 * \return  void
 */
void salir(void){

    printf("Adios!");
}


