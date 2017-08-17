#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<float> numeros;
	for(int i = 0; i < 25 ; i++){
		float numero;
		cin >> numero;
		numeros.push_back(numero);
	}
	for(int i = 0; i < 25 ; i++){
		cout << numeros[i] << ", ";
	}
}
