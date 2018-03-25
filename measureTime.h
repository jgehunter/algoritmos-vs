/*
*	FICHERO: measureTime.h
*	AUTORES: Jorge Hunter	I�aki Echevarr�a	Jos� Miguel Herv�s
*
*	El fichero contiene la definici�n de las variable y las funciones que se
*   usan para medir el tiempo que tardan en ejecutarse los algoritmos
*   de ordenaci�n. La implementaci�n est� definida para sistemas operativos
*   Windows, Linux y OS X.
*/

#ifndef MEASURE_TIME_H

#define MEASURE_TIME_H

#ifdef _WIN32
#include <Windows.h>
extern LARGE_INTEGER tcounter;
extern LARGE_INTEGER freq;
extern LARGE_INTEGER tick_value;
extern LARGE_INTEGER prev_tick_value;
extern long long usecs;
#elif defined(__APPLE__)
#include "timeApple.h"
#include <mach/mach_time.h>
#include <stdint.h>
extern uint64_t freq_num;
extern uint64_t freq_denom;
extern uint64_t tick_value;
extern uint64_t prev_tick_value;
#elif defined(__linux__)
#include <time.h>
#include <sys/time.h>
#include <stdint.h>
extern long long prevTime;
extern long long timeSpent;
#else
#error "Su SO no est� soportado"
#endif

// La funci�n inicializa el reloj del sistema averiguando su frecuencia y
// anota el valor del reloj en el momento que es llamada.
//
// Inputs: 
//
// Outputs: guarda la frecuencia del reloj y el valor en el momento en que es 
//          llamada.
//
// La implementaci�n es dependiente del sistema operativo.

void startTimer();

// La funci�n obtiene el valor en el momento del reloj y lo compara con el
// anterior valor leido del reloj.
//
// Inputs: 
//
// Outputs: devuelve el tiempo pasado en microsegundos desde que se llam� la
//          funci�n startTimer().
//
// La implementaci�n es dependiente del sistema operativo.

long long getTime();

#endif
