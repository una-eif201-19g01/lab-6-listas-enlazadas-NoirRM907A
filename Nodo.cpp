// Fecha: 17-09-2019
// Autor: Noel Munoz Ramirez
// Universidad Nacional

#include "Nodo.h"

Nodo::Nodo(){}
Nodo::Nodo(Libro libro, Nodo *siguiente): libro(libro), siguiente(siguiente){}
Nodo::~Nodo(){}

//Metodos SET/GET
void Nodo::setLibro(Libro libro) {
	Nodo::libro = libro
};

void Nodo::setSiguiente(Nodo* siguiente) {
	Nodo::siguiente = siguiente;
}

Libro Nodo::getLibro() {
	return libro;
}

Nodo *Nodo::getSiguiente() {
	return siguiente;
}

std::string Nodo::toString() {
	return libro.toString();
}