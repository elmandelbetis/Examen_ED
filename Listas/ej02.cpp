#include <list>
#include <iostream>
using namespace std;

void EliminaPares(list<int>&L){

    list<int>::const_iterator cit = L.cbegin();

    while (cit != L.cend()){
        if (*(cit) % 2 == 0){
            cit = L.erase(cit);
        }
        else{
            ++cit;
        }
    }

}

int main(){

    list<int> lista = {1,2,4,32344,5,2,45,3,2,1};

    EliminaPares(lista);
    
    list<int>::const_iterator cit;

    for (cit = lista.cbegin(); cit != lista.cend(); ++cit){
        cout << *(cit) << " ";
    }
    cout << endl;

}