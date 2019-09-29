//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_NODO_H
#define LAB_6_LISTAS_ENLAZADAS_NODO_H

#include "Libro.h"

class Nodo {
private:
	Libro libro;
	Nodo* siguiente;


public:
	virtual Nodo();
	virtual Nodo(Libro libro, Nodo* siguiente);
	virtual ~Nodo();

	//Metodos SET/GET
	virtual void setLibro(Libro libro);
    virtual Libro getLibro();

	virtual void setSiguiente(Nodo* siguiente);
	virtual Nodo *getSiguiente();

	virtual std::string toString();

};


#endif //LAB_6_LISTAS_ENLAZADAS_NODO_H
