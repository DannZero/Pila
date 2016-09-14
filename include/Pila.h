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
     Nodo *getTope();
 
 private:
     Nodo *tope;
 };
