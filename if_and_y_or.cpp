#include <iostream>
using namespace std;
main(){
	//and (y) && 
	//  or (o)  ||
	
	
	char lapiz, lapicero, cuaderno;
	cout<<"Trae Lapiz ( s/n )";
	cin>>lapiz;
	cout<<"Trae Lapicero ( s/n )";
	cin>>lapicero;
	cout<<"Trae Cuaderno ( s/n )";
	cin>>cuaderno;
	// Puede entrar a mi clase si usted trae un lapiz y un lapicero
	// and = el valor es verdadero si ambas son verdaderas
	// puede entrar a mi clase si usted trae un lapiza o un lapicero
	// or  (o) = el valor es verdadero si por lo menos una es verdadera
	
	// puede entrar a mi clase si usted trae un lapiza o un lapicero y un cuderno
	if((lapiz=='s' || lapicero=='s') && cuaderno=='s'){
		cout<<"Ingresa"<<endl;
		
	}else{
		cout<<"Lo siento no puede Ingresar"<<endl;
		}
		
	
	
			
		
	system("pause");
}
