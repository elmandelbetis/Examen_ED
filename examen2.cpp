#include <queue>
#include <iostream>
#include <list>
using namespace std;

void transformarcola(queue<int> &c){

    list<int> aux;

    while(!c.empty()){
        int elem = c.front();
        aux.push_back(c.front());
        c.pop();
    }

    list<int>::iterator it;

    for(it = aux.begin(); it != aux.end(); ++it){
        if((*it%2 == 0) && (*next(it) == *it))
            it = aux.erase(it);       
    }

    list<int>::const_iterator cit = aux.begin();

    for(; cit != aux.end(); ++cit)
        c.push(*cit);


}

int main(){
    queue<int> cola;
    queue<int> cola_trans;

    cola.push(1); 
    cola.push(2); 
    cola.push(2); 
    cola.push(3); 
    cola.push(3); 
    cola.push(4); 
    cola.push(5); 
    cola.push(5); 
    cola.push(1); 
    cola.push(1);
    cola.push(9); 
    cola.push(9); 
    cola.push(8); 
    cola.push(8); 
    cola.push(8); 
    cola.push(3);

    cout << endl << "Cola tras ser transformada:" << endl;

    transformarcola(cola);
    while(!cola.empty()){
        cout << cola.front();
        cola.pop();
    }
    cout << endl;
}