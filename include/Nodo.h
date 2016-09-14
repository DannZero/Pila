/**
 *	Autor: Daniel Ponce de León Súchil
 */

#include <iostream>
using namespace std;

class Nodo
{
public:
	Nodo(int dato);
	Nodo(int dato, Nodo *next);
	int getDato();
	Nodo *getNext();
	void setDato(int dato);
	void setNext(Nodo *next);

private:
	int dato;
	Nodo *next;
};