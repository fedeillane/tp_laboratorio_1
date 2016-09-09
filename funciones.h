#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


/** Funcion que despliega el menu
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  int     - Opcion elejida
 *
 */
int menu(float, float);


/** Funcion que toma el operando del usuario
 *
 * \param   int     - Operando a tomar
 * \return  float   - Operando elejido
 */
float ingresoOperando(int);


/** Funcion que suma los 2 operandos
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  float   - Resultado de la suma
 */
float suma(float, float);


/** Funcion que resta los 2 operandos
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  float   - Resultado de la resta
 */
float resta(float, float);


/** Funcion que divide los 2 operandos
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  float   - Resultado de la division
 */
float division(float, float);


/** Funcion que multiplica los 2 operandos
 *
 * \param   float   - Operando 1
 * \param   float   - Operando 2
 * \return  float   - Resultado de la multiplicacion
 */
float multiplicacion(float, float);


/** Funcion que saca el factorial del primer operando
 *
 * \param   float   - Operando 1
 * \return  float   - Resultado del factorial
 */
float factorial(float);

/** Funcion que muestra los resultados de las distintas operaciones
 *
 * \param   float     - Resultado a mostrar
 * \param   char      - Operacion que se quiere mostrar
 * \return  void
 */
void mostrarResultado(float, char);


/** Funcion que muetra un mensaje de salida.
 *
 * \param   void
 * \return  void
 */
void salir(void);


#endif // FUNCIONES_H_INCLUDED
