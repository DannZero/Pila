/**
 *	Autor: Daniel Ponce de León Súchil
 */
#include "Pila.h"

Pila::Pila()
{
    this->tope = NULL;
}

Pila::Pila(int dato)
{
    this->tope = new Nodo(dato);
}

bool Pila::isEmpty()
{
    return (tope == NULL);
}

void Pila::show()
{
    if (this->isEmpty())
	{
		cout << "La pila está vacía." << endl;
		return;
	}
	cout << "|     | " << endl;
    Nodo *n = tope;
	while (n != NULL)
    {
        cout << "|  " << n->getDato() << "  |" << endl;
        n = n->getNext();
    }
}

int Pila::pop()
{
    int dato = tope->getDato();
    tope = tope->getNext();
    return dato;
}

void Pila::push(int dato)
{
    Nodo *n = new Nodo(dato, tope);
    tope = n;
}

void Pila::vaciar()
{
    this->tope = NULL;
}

Nodo *Pila::getTope()
{
    return tope;
}