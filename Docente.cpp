#include "Persona.cpp"
#include <iostream>
using namespace std;
class Docente : Persona{
		// atributos
		private :
			string codigo; string puesto;
			float salario;
			
		// metodos constructor, get set, crud
		public :
			Docente(){
			}
			Docente(string nom, string ape, string dir, int tel, string fn, string n, bool gen)
			: Persona(nit,nom,ape,dir,fn,tel,gen){
				nit = n;
				codigo = cod;
				puesto = pue;
				salario = sal;
			}		
			//set (modificar)
			void setNit(string n){
				nit = n;
			}
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
			void setGenero(bool gen){
				genero = gen;
			}
			void setCodigo(string cod){
				codigo = cod;
			}
			void setPuesto(string pue){
				puesto = pue;
			}
			void setSalario(float sal){
				salario = sal;
			}
					
			// get  (mostrar)
			string getNit(){
				return nit;
			}
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
			string getCodigo(){
				return codigo;
			}
			string getPuesto(){
				return puesto;
			}
			float getSalario(){
				return salario;
			}
		
			void leer(){
				cout<<"nit:"<<nit<<endl;
				cout<<"Nombres:"<<nombres<<endl;
				cout<<"Apellidos:"<<apellidos<<endl;
				cout<<"Direccion:"<<direccion<<endl;
				cout<<"Telefono:"<<telefono<<endl;
				cout<<"Genero:"<<genero<<endl;
				cout<<"Codigo:"<<codigo<<endl;
				cout<<"Puesto:"<<puesto<<endl;
				cout<<"Salario:"<<salario<<endl;
				}			
};
			


	

