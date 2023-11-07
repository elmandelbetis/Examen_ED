/**
 * Dado un vector de enteros obtener una funcion que obtenga el subvector con
 * la secuencia creciente más larga
 * 
 *     p.e.
 *         v={3, 5, 2, 4, 9, 0} ==> {2, 4, 9}
*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> Subsecuencia(const vector<int> &v)
{
    vector<int> output;
    vector<int>::const_iterator iti,itf,ita;

    iti = v.cbegin();

    while (iti != v.cend()){
        itf = ita = iti;
        ++itf;

        while (itf != v.cend() && *(ita)<*(itf)){
            ++itf;++ita;
        }
        
        if ((itf - iti) > output.size()){
            output.assign(iti,itf);
        }
        iti = itf;
    }

    return output;
}

void Imprime(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << "\n\n";
}

int main()
{
    vector<int> v = {3, 5, 2, 4, 9, 0};
    vector<int> output;
    
    output = Subsecuencia(v);
    Imprime(output);
}