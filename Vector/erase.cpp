#include <vector>
#include <iostream>
using namespace std;

void Imprime(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << "\n\n";
}

void BorraPares(vector<int>&v)
{
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (*(it) % 2 == 0)
        {
            v.erase(it);
        }
    }
}

int main(){

   vector<int> v = {42, 17, 81, 59, 23, 6, 37, 50, 12, 65, 98, 31, 74, 2, 55};

    cout << "Vector sin elementos pares eliminados: " <<endl;
    Imprime(v);
    BorraPares(v);
    cout << "Vector con elementos pares eliminados: " <<endl;
    Imprime(v);

}