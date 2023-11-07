#include <vector>
#include <iostream>
using namespace std;

void Imprime(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << "\n\n";
}

int main()
{
    vector <int> v1,v2;
    int size = 10;

    cout << "Introduciendo datos del vector 1:"<< endl;
    for (int i=0; i<size; i++)
    {
        int a;
        cin >> a;
        v1.insert(v1.begin(),a);
    }

    cout << "Introduciendo datos del vector 2:"<< endl;
    for (int i=0; i<size; i++)
    {
        int a;
        cin >> a;
        v2.insert(v2.end(),a);
    }

    Imprime(v1);
    Imprime(v2);


}