#include <iostream>
#include <stdlib.h> 
#include <string.h>
using namespace std;
int main (){
	int fila = 0, columna = 0, **pm_notas, *codigo;
	string *nombre;
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>fila;	
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>columna;	
	pm_notas = new  int *[fila];
	codigo = new int [fila];
	nombre = new string [fila];
	for (int i=0;i<fila;i++){
	pm_notas[i] = new int[columna]; 	
	}
	cout<<"--------------Ingresar Notas--------------"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Ingrese el codigo del estudiante: ";
		cin>>codigo[i];
		cin.ignore();
		cout<<"Ingrese el nombre estudiante: ";
		getline(cin,nombre[i]);
		for (int j=0;j<columna;j++){
			cout<<"Ingrese la Nota ["<<j<<"]: ";
			cin>>*(*(pm_notas+i)+j);
			}
			cout<<"_________________________________________\n";
	}
		cout<<"--------------Mostrar Notas--------------"<<endl;
	for (int i=0;i<fila;i++){
			cout<<"Codigo: ";
			cout<<codigo[i]<<endl;
			cout<<"Nombre: ";
			cout<<nombre[i]<<endl;
		for (int j=0;j<columna;j++){
			cout<<"Nota ["<<j<<"]: ";
			cout<<*(*(pm_notas+i)+j)<<endl;
			}
			cout<<"_________________________________________\n";
	}
	for (int i=0;i<fila;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	delete [] codigo;
	delete [] nombre;

	system("PAUSE");
	return 0;
}
