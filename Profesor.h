/*
 * Profesor.h
 *
 *  Created on: 25 mar. 2020
 *      Author: david
 */

#ifndef PROFESOR_H_
#define PROFESOR_H_


#include "Asignatura.h"
#include <stdio.h>

typedef struct{

	char DNI;
	char nombre;
	Asignatura Asignatura1;
	Asignatura Asignatura2;
	Asignatura Asignatura3;

}Profesor;


#endif /* PROFESOR_H_ */
