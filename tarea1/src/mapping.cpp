/*
  Módulo de definición de 'TMapping'.

  'TMapping' es un mapping de asociaciones de elementos de
   tipo nat con elementos de tipo double.

  Laboratorio de Programación 2.
  InCo-FIng-UDELAR
 */

#ifndef _MAPPING_H
#define _MAPPING_H

#include "utils.h"

struct repMap {
  nat asociaciones;
  info_t pares[MAX + 1];
};

/*  Operaciones de TMapping */

/*
  Devuelve un elemento de tipo 'TMapping' vacío (sin elementos).
 */
TMapping crearMapping(){
  TMapping map = new repMap;
  (*map).asociaciones = 0;
  return map;
}

/*
  Si en 'map' hay menos de MAX (definido en utils.h) asociaciones y 'clave'
  no tiene un valor asociado en 'map' agrega en 'map' la asociación
  (clave,valor)
  Devuelve 'map'.
 */
TMapping asociar(nat clave, double valor, TMapping map){
  if( (*map).asociaciones < MAX && !esClave(clave, map)){
    (*map).pares[asociaciones + 1].natural = clave;
    (*map).pares[asociaciones + 1].real = valor;
    (*map).asociaciones = (*map).asociaciones + 1;
  };
  return map;
}

/*
  Devuelve 'true' si y solo si 'clave' tiene un valor asociado en 'map'.
 */
bool esClave(nat clave, TMapping map){
  while( nat i = 0 < (*map).asociaciones && (*map).pares[i].natural != clave){
    i++;
  };
  return (*map).pares[i].natural == clave;
}

/*
  Devuelve el valor que en 'map' está asociado a 'clave'.
  Precondición: esClave(clave, map)
 */
double valor(nat clave, TMapping map){
  while( nat i = 0 < (*map).asociaciones && (*map).pares[i].natural != clave){
    i++;
  };
  return (*map).pares[i].natural;
}

/*
  Si 'clave' tiene un valor asociado en 'map' remueve de `map' la asociación de
  'clave'.
  Devuelve 'map'.
 */
TMapping desasociar(nat clave, TMapping map){
  if(esClave(clave)){
    nat auxPos = 0;
    while ( (*map).pares[auxPos].natural != clave ){
      auxPos++;
    }
    for( nat i = auxPos; i < (*map).asociaciones; i++ ){
      (*map).pares[i] = (*map).pares[i + 1] 
    }
    (*map).asociaciones --;
  }
  return map;
}

#endif
