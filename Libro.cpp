//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Libro.h"
#include<sstream>

Libro::Libro() {}
Libro::Libro(int id, std::string nombre, std::string autor):id(id),nombre(nombre), autor(autor){}
Libro::~Libro(){}

//SET Y GET ID
void Libro::setID(int id) {
	Libro::id = id;
}
int Libro::getID() const {
	return id;
}

//SET Y GET NOMBRE
void Libro::setNombre(std::string nombre) {
	Libro::nombre = nombre;
}
std::string Libro::getNombre() const {
	return nombre;
}

//SET Y GET AUTOR
void Libro::setAutor(std::string autor){
	Libro::autor = autor;
}
std::string Libro::getAutor() const{
	return autor;
}

std::string Libro::toString() {
	std::string portada;
	portada = "ID: " + std::to_string(id) + "Nombre: " + nombre + "Autor: " + autor + "\n";
	return portada
}