// Capitulo 3 - Ejercicio 18
/*
	Cree un programa que defina dos arrays de int, uno acontinuaci�n del otro.
	Indexe el primer array m�s all� de su tama�o para caer sobre el segundo, haga
	una asignaci�n. Muestre el segundo array para ver los cambios que eso ha 
	causado. Ahora intente definir una variable char entre las definiciones de los
	array, y repita el experimento. Quiz� quiera crear una funci�n para imprimir
	arrays y as� simplificar el c�digo.
*/

#include <iostream>
using namespace std;

void mostrarArray(int array[], int size);

int main(){
	const int size = 4;
	int array2[size] = {2,2,2,2};
	char holis = 'A';	// no pasa nada con el char?
	int array1[size] = {1,1,1,1};
	
	array1[4] = 7;
	
	mostrarArray(array1, size);
	mostrarArray(array2, size);
	
	//cout << &holis;
}

void mostrarArray(int array[], int size){
	for(int i = 0; i < size; i++){
		cout << array[i];
	}
	int* p = array;
	cout << " " << p;
	cout << endl;
}
