/*
  Módulo de definición de 'TCola'.

  Laboratorio de Programación 2.
  InCo-FIng-UDELAR
 */

#ifndef _COLA_H
#define _COLA_H

#include "utils.h"

// Representación de 'TCola'.
// Se debe definir en colaInfo.cpp.
// struct repCola;
// Declaración del tipo 'TCola'.
typedef struct repCola *TCola;

struct repCola{
  TLista lst;
}

{
  
};

/* Operaciones de TCola */

/*
  Devuelve un elemento de tipo 'TCola' vacío (sin elementos).
 */
TCola crearCola();

/*
  Devuelve 'true' si y solo si 'cola' no tiene elementos.
 */
bool esVaciaCola(cola){
  return (longitud(cola.lst) == 0);
}

/*
  Si en 'cola' hay menos de MAX (definido en utils.h) elementos encola
  'nuevo' en 'cola'.
  Devulve 'cola'.
 */
TCola encolar(nuevo, cola){
  (*cola).lst = insertar(0, nuevo, (*cola).lst);
  return (*cola).lst
}

/*
  Devuelve el frente de 'cola'.
  Precondición: 'cola' tiene elementos.
 */
info_t frente(cola){
  nat largo = longitud((*cola).lst);
  info_t res = infoLista(largo, (*cola).lst);
  return res;
}

/*
  Si 'cola' tiene elementos desapila el frente de 'cola'.
  Devulve 'cola'.
 */
TCola desencolar(c){
  nat largo = longitud((*cola).lst);
  c = remover(largo, (*c).lst);
}

#endif
