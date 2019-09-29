// Fecha: 17-09-2019
// Autor: Noel Munoz Ramirez
// Universidad Nacional
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#include<iostream>

class Libro {
private:
	int id;
	std::string nombre;
	std::string autor;
public:
	Libro();
	Libro(int, std::string, std::string);
	virtual ~Libro();

	//SET Y GET ID
	void setID(int id);
	int getID() const;

	//SET Y GET NOMBRE
	void setNombre(std::string nombre);
	std::string getNombre() const;

	//SET Y GET AUTOR
	void setAutor(std::string autor);
	std::string getAutor() const;

	//toString
	std::string toString();



};


#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
