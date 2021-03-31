/*
 * utn_biblioteca.h
 *
 *  Created on: 28 mar. 2021
 *      Author: nahuel
 */

#ifndef UTN_BIBLIOTECA_H_
#define UTN_BIBLIOTECA_H_


int utn_int(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_float	(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos);
int utn_char	(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos);
int ordenamientoArrayDes(int pArray[],int size);
int imprimirArrayInt(int pArray[],int size);

#endif /* UTN_BIBLIOTECA_H_ */
