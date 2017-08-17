#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	ifstream fichero("ejercicio4.cpp");
	string palabra;
	int ocurrencias = 0;
	while(fichero >> palabra){
		if(palabra == "ocurrencias"){
			ocurrencias++;	
		}
	}
	cout << "La cantidad total de ocurrencias de la palabra ocurrencias es:" << ocurrencias << endl;
	return 0;
}
