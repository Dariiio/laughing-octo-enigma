#include <iostream>
#include <vector>
using namespace std;

void llenarVectores(vector<float> &vec);

void mostrarVectores(vector<float> &vec);

int main(){
	vector<float> vec1;
	vector<float> vec2;
	vector<float> vec3;
	
	llenarVectores(vec1);
	llenarVectores(vec2);
	
	for(int i = 0; i < 4; i++){
		vec3.push_back(vec1[i] + vec2[i]);
	}
	
	mostrarVectores(vec1);
	mostrarVectores(vec2);
	mostrarVectores(vec3);
}

void llenarVectores(vector<float> &vec){
	static int j = 0;
	j++;
	cout << "llenar vector numero: " << j << endl;
	for(int i = 0; i < 4 ; i++){
		float numero;
		cin >> numero;
		vec.push_back(numero);
	}
}

void mostrarVectores(vector<float> &vec){
	for(int i = 0; i < vec.size() ; i++){
		cout << vec[i] << ", ";
	}
	cout << endl;
}
