#include "Persona.cpp"
#include <iostream>
using namespace std;
class Docente : Persona {
	// atributos
	private :
		
		string codigo_docente,puesto,fecha_ingreso;
		float salario;
	// metodos constructor,get set,crud
	public :
		Docente (){
		}
		Docente(string nom,string ape,string dir, int tel,string fn, string dc,string p,float s, string fi) : Persona(nom,ape,dir,tel,fn){
			codigo_docente = dc;
			puesto = p;
			salario = s;
			fecha_ingreso = fi;
		}
		//set (modificar)
		void setNombres(string nom){
			nombres = nom;
		}
		void setApellidos(string ape){
			apellidos = ape;
		}
		void setDireccion(string dir){
			direccion = dir;
		}
		void setTelefono(int tel){
			telefono = tel;
		}
		void setPuesto(string p){
			puesto = p;
		}
		void setSalario(float s){
			salario = s;
		}
		//get (mostrar)
		string getNombres(){
			return nombres;
		}
		string getApellidos(){
			return apellidos;
		}
		string getDireccion(){
			return direccion;
		}
		int getTelefono(){
			return telefono;
		}
		string getFechaNacimiento(){
			return fecha_nacimiento;
		}
		string getCodigoDocente(){
			return codigo_docente;
		}
		string getPuesto(){
			return puesto;
		}
		float getSalario(){
			return salario;
		}
		string getFechaIngreso(){
			return fecha_ingreso;
		}
		void leer (){
			cout<<"Nombres: "<<nombres<<endl;
			cout<<"Apellidos: "<<apellidos<<endl;
			cout<<"Direccion: "<<direccion<<endl;
			cout<<"Fecha Nacimiento: "<<fecha_nacimiento<<endl;
			cout<<"Codigo Docente: "<<codigo_docente<<endl;
			cout<<"Puesto: "<<puesto<<endl;
			cout<<"Salario:"<<salario<<endl;
			cout<<"Telefono: "<<telefono<<endl;
			cout<<"Fecha Ingreso: "<<fecha_ingreso<<endl;
		}	
		void crear (){
			cout<<"Atributos Creados Exitosamente ";
		}	
};
