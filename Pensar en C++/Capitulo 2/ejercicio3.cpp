#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream fichero("ejercicio3.cpp");
    string palabra;
    int palabras = 0;
    while(fichero >> palabra)
        {
            palabras++;
        }
    cout << "La cantidad total de palabras es:" << palabras << endl;
    return 0;
}
