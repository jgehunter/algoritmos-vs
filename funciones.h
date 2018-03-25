/*
*	FICHERO: funciones.h
*	AUTORES: Jorge Hunter    I�aki Echevarr�a    Jos� Miguel Herv�s
*
*	El fichero contiene algunas funciones que se utilizan en el programa.
*/

#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "main.h"

// La funci�n mezcla las posiciones de los �ndices de una tabla utilizando
// el algoritmo de Fisher-Yates.
//
// Inputs: puntero struct lista que apunta al comienzo de la tabla y int que
//		   contiene el n�mero de elementos en la tabla.
//
// Outputs: la funci�n opera sobre la tabla y la mezcla.
//
// En cada iteraci�n se elige al azar un n�mero entre 1 y el n�mero de elementos
// que queden sin ordenar y se coloca en la nueva tabla aleatoria.

void mezclar(struct lista *, long);

// La funci�n crea la tabla que indica el usuario.
//
// Inputs: puntero struct lista que apunta al comienzo de la tabla, long con el
// tipo de ordenaci�n de la tabla y long con el tama�o de la tabla.
//
// Outputs: la tabla de tama�o y ordenaci�n indicados.

void crearTabla(struct lista *, long, long);

// La funci�n ordena una tabla utilizando el m�todo indicado.
//
// Inputs: puntero struct lista que apunta al comienzo de la tabla, long con el
//         tama�o de la tabla y long con el algoritmo a usar para ordenarla.
//
// Outputs: la funci�n opera sobre la tabla y la ordena.

void ordenarTabla(struct lista *, long, long);

#endif
