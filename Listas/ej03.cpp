#include <iostream>
#include <list>
using namespace std;

list<int> Concatenar(list<int> &L1, list<int> &L2){
    
    list<int> output(L1);

    for (auto it = L2.begin(); it != L2.end(); ++it){
        output.insert(output.end(),*it);
    }

    return output;
}

int main(){

    list<int> L1 = {1,2,3};
    list<int> L2 = {2,3,5};
    list<int> L3;
    
    L3 = Concatenar(L1,L2);

    list<int>::const_iterator cit;

    for (cit = L3.cbegin(); cit != L3.cend(); ++cit){
        cout << *(cit) << " ";
    }
    cout << endl;
}