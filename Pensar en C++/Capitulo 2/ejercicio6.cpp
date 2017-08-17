#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	
    vector <string> v;
    ifstream in("Fillvector.cpp");
    string line;
    string elementosVector;
    
    while(getline(in, line)){
        v.push_back(line);
    }
    
    for(int i=0; i < v.size(); i++){
        elementosVector += v[i];
    }
	
	cout << "Elementos de la clase vector en un solo string" << elementosVector;
	
    return 0;
}
