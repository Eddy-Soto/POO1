#include <iostream>
using namespace std;
// 1. Nombre de la Clase (Persona)

class Persona{
		//2. Atributos = caracteristicas de la clase (objeto)
public:
		string nombres, apellidos, direccion, fecha_nacimiento;
		int telefono;

// 3. Constructor
public:
	persona(){
	}
	Persona(string nom,string ape, string dir, string fn,int t){
		nombres = nom;
		apellidos = ape;
		fecha_nacimiento = fn;
		telefono = t;
	}
// 4. Metodos
void crear();
void leer();
void actualizar();
void eliminar();

};

