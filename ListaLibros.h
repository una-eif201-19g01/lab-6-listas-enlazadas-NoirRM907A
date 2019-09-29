// Fecha: 17-09-2019
// Autor: Noel Munoz Ramirez
// Universidad Nacional

#ifndef LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#define LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#include"Nodo.h"

class ListaLibros {
private:
	Nodo* primero;
	Nodo* actual;

public:
	virtual ListaLibros();
	virtual ListaLibros();
	virtual ~ListaLibros();

	//Metodos SET/GET
	void setPrimero(Nodo*);
	Nodo* getPrimero();

	void setActual(Nodo*);
	Nodo* getActual();

	void insertarFinal();
	bool eliminarFinal();
	bool encontrarLibro();







};


#endif //LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
