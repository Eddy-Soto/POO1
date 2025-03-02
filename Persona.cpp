#include <iostream>
using namespace std;
// 1. Nombre de la Clase (Persona)

class Persona{
	//2.1 Controles de Acceso (Private, Protected (clases heredadas, public )
	//2. Atributos = caracteristicas de la clase (objeto)
private:
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
// CRUD es un acrónimo en inglés que significa "Create, Read, Update, Delete". En español, se traduce como "Crear, Leer, Actualizar y Borrar".
void crear();
void leer(){
	
	cout<<"Nombres:"<<nombres<<endl;
	cout<<"Apellidos:"<<apellidos<<endl;
	cout<<"Direccion:"<<direccion<<endl;
	cout<<"Telefono:"<<telefono<<endl;
	cout<<"Fecha Nacimiento:"<<fecha_nacimiento<<endl;
}
void actualizar();
void eliminar();

};

