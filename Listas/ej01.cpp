#include <list>
#include <iostream>
using namespace std;

bool Palindromo(const list<char> &L){
    
    list<char>::const_iterator it = L.cbegin();
    list<char>::const_reverse_iterator rit = L.crbegin();

    while (it != L.cend()){
        if (*(it)!=*(rit))
            return false;
        ++it;
        ++rit;
    }

    return true;
}

int main(){

    list<char> lista1 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'};

    list<char> lista2 = {'a','b','b','a'};
    
    if (Palindromo(lista1)){
        cout << "La lista 1 es un palindromo" << endl;
    }
    else{
        cout << "La lista 1 no es un palindromo" << endl;
    }

    if (Palindromo(lista2)){
        cout << "La lista 2 es un palindromo" << endl;
    }
    else{
        cout << "La lista 2 no es un palindromo" << endl;
    }

}