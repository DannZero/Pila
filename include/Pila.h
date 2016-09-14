/**
 *	Autor: Daniel Ponce de León Súchil
 */

 #include "Nodo.h"

 class Pila
 {
 public:
     Pila();
     Pila(int dato);
     bool isEmpty();
     void show();
     int pop();
     void push(int dato);
     void vaciar();
     Nodo *getTope();
 
 private:
     Nodo *tope;
 };
