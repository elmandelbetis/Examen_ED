// Dado un vector de enteros poner todos los numeros pares a -1. Definir una función
// que haga este cambio sobre un vector de entrada.

#include <vector>
#include <iostream>
using namespace std;

void CambiaPares(vector<int> &v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end();++it)
    {
        if (*(it) % 2 == 0){
            *it = -1;
        }
    }
}

int main(){
    
    vector<int> v = {42, 17, 81, 59, 23, 6, 37, 50, 12, 65, 98, 31, 74, 2, 55};
    CambiaPares(v);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

}