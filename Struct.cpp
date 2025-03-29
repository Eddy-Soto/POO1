#include <iostream>
using namespace std;
struct estudiante{
	int *codigo;
	string *nombre;
	int **nota;

};
main(){
	estudiante estudiante;
	
	int fila =0,columna =0;
	cout<<"cuantos estudiantes desea agregar:";
	cin>>fila;
	
	cout<<"cuantas notas por estudiante desea agregar:";
	cin>>columna;

    estudiante.codigo = new int [fila];
    estudiante.nombre = new string[fila];
    estudiante.nota = new int *[fila];
    for (int i=0;i<fila;i++){
    	estudiante.nota[i] = new int[columna];
	}
	cout<<"___________________ingreso de nota__________________"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"nombre completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
        for (int ii=0;ii<columna;ii++){
        	cout<<"ingrese nota["<<ii<<"]:";
        	cin>>*(*(estudiante.nota+i)+ii);
			}
			cout<<"________________"<<endl;
		}
		cout<<"___________mostrar datos_______"<<endl;
		
		for (int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"nombre completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
        for (int ii=0;ii<columna;ii++){
        	cout<<"ingrese nota["<<ii<<"]:"<<*(*(estudiante.nota+i)+ii)<<endl;
			}
			cout<<"________________"<<endl;
		}
	
    for (int i=0;i<fila;i++){
    	delete[] estudiante.nota[i] ;
    }
        delete[] estudiante.codigo;
    delete[]estudiante.nombre;
    delete[]estudiante.nota;
    system("pause");
	
}
