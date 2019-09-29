// Fecha: 17-09-2019
// Autor: Noel Munoz Ramirez
// Universidad Nacional

#ifndef LAB_6_LISTAS_ENLAZADAS_NODO_H
#define LAB_6_LISTAS_ENLAZADAS_NODO_H

#include "Libro.h"

class Nodo {
private:
	Libro libro;
	Nodo* siguiente;


public:
	virtual Nodo();
	virtual Nodo(Libro, Nodo*);
	virtual ~Nodo();

	//Metodos SET/GET
	virtual void setLibro(Libro);
    virtual Libro getLibro();

	virtual void setSiguiente(Nodo*);
	virtual Nodo *getSiguiente();

	//Metodos
	virtual std::string toString();

};


#endif //LAB_6_LISTAS_ENLAZADAS_NODO_H
