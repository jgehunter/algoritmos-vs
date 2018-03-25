/*
*	FICHERO: algoritmos.h
*	AUTORES: Jorge Hunter	I�aki Echevarr�a	Jos� Miguel Herv�s
*
*	El fichero contiene los algoritmos que vamos a utilizar para ordenar la
*   tabla.
*/

#ifndef ALGORITMOS_H
#define ALGORITMOS_H
#include "main.h"

// La funci�n ordena una tabla utilizando el m�todo de la burbuja.
//
// Inputs: puntero struct lista que apunta al comienzo de la tabla y int que
//		   contiene el n�mero de elementos en la tabla.
//
// Outputs: la funci�n opera sobre la tabla y la ordena.
//
// Se van comparando elementos adyacentes de dos en dos y si estan desordenados
// se intercambian. Cada vez que se completa este proceso a lo largo de toda la
// tabla el menor �ndice queda colocado por lo que repitiendo varias veces el
// proceso se ordena la tabla.

void burbuja(struct lista*, int);

// La funci�n ordena una tabla por inserci�n.
//
// Inputs: puntero struct lista que apunta al comienzo de la tabla y int que
//		   contiene el n�mero de elementos en la tabla.
//
// Outputs: la funci�n opera sobre la tabla y la ordena.
//
// Se comienza con un conjunto formado por el primer elemento que, claramente,
// est� ordenado y se va a�adiendo elementos al conjunto de uno en uno
// comparandolos con todos los elementos anteriores y insert�ndolos en la
// posici�n que les corresponde.

void insercion(struct lista*, int);

// La funci�n ordena una tabla por selecci�n.
//
// Inputs: puntero struct lista que apunta al comienzo de la tabla y int que
//		   contiene el n�mero de elementos en la tabla.
//
// Outputs: la funci�n opera sobre la tabla y la ordena.
//
// Se recorren todos los elementos de la tabla hasta encontrar el menor, que se
// coloca en la primera posici�n y se vuelve a repetir el proceso sin usar
// los elementos ya seleccionados hasta que queda ordenada la tabla.

void seleccion(struct lista*, int);

// La funci�n proporciona el numero de pasos que le corresponde a cierto tama�o.
//
// Inputs: int que contiene el tama�o de la tabla.
//
// Outputs: int que contiene el n�mero de pasos correspondientes.
//
// Nos basamos en el tama�o de los pasos propuesto por Ciura derivado 
// experimentalmente.

int calcularPasos(int);

// La funci�n ordena una tabla mediante el procedimiento shell.
//
// Inputs: puntero struct lista que apunta al comienzo de la tabla y int que
//		   contiene el n�mero de elementos en la tabla.
//
// Outputs: la funci�n opera sobre la tabla y la ordena.
//
// Se utiliza el mismo principio que en el algoritmo de la burbuja solo con la
// diferencia de que, para salvar el inconveniente de que en el algoritmo de la
// burbuja los �ndices solo se intercambian con una posici�n adyacente, primero
// intercambia elementos que estan alejados entre s� hasta que al final acaba
// realizando el algoritmo de la burbuja sobre una tabla algo m�s ordenada.

void shell(struct lista*, int);

// La funci�n realiza una estructura de mont�culo.
//
// Inputs: int con el �ndice del primer elemento con el que queremos
//         formar el mont�culo, int con el �ndice del �ltimo elemento
//         con el que queremos formar el mont�culo y puntero struct lista
//         hacia a la tabla.
//
// Outputs: la funci�n forma un mont�culo con los elementos indicado.
//
// Se colocan los elementos de manera que cada elemento sea menor que los dos
// que los dos siguientes.

void criba(int, int, struct lista*);

// La funci�n ordena una tabla mediante el m�todo del mont�culo.
//
// Inputs: puntero struct lista que apunta al comienzo de la tabla y int que
//		   contiene el n�mero de elementos en la tabla.
//
// Outputs: la funci�n opera sobre la tabla y la ordena.
//
// Se van creando mont�culos a partir de los elementos de la tabla y as�
// se va consiguiendo el elemento menor hasta que queda ordenada la tabla.

void monticulo(struct lista*, int);

// La funci�n ordena una tabla mediante el procedimiento quicksort.
//
// Inputs: int que contiene el primer elemento con de la tabla con el que
//         se quiere hacer el quicksort, int que contiene el �ltimo elemento
//         de la tabla con el que se quiere hacer el quicksort y puntero struct
//         lista que apunta a la tabla.
//
// Outputs: la funci�n opera sobre la tabla y la ordena.
//
// Se escoge un elemento pivote que cumple que todos los elementos superiores
// a el estan por delante y todos los elementos inferiores estan por detras, 
// de manera que el pivote est� ordenado. A continuaci�n se tienen dos subtablas
// y se repite el proceso con cada una de ellas recursivamente hasta que la
// tabla queda totalmente ordenada.

void quicksort( int, int, struct lista*);

#endif


