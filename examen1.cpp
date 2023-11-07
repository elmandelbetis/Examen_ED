/**
 * Se dispone de una secuencia de enteros almacenados en una cola y se desea comprobar
 * si dicha secuencia en orden inverso coincide con alguna subsecuencia de elementos
 * de una pila P. Usando solamente los TDA Pila y Cola, diseñar una función:
 * 
 *          bool Condicion (stack<int> &P, queue<int> &Q);
 * 
 * que compruebe si la condición se cumple. Unicamente se puede usar como estructura
 * auxiliar una pila adicional.
*/

#include <queue>
#include <stack>
#include <iostream>
using namespace std;

template <typename T>
void Imprimir(T cola){
    
    while(!cola.empty()){
        cout << cola.front() << ", ";
        cola.pop();
    }

}

bool Condicion(stack<int> &pila, queue<int> &cola){

    bool es_subsecuencia = false;
    bool sigue = false;

    stack<int> pila_aux;


    // Rellenamos la pila auxiliar con los valores de la pila original
    
    while(!pila.empty()){
        pila_aux.push(pila.top());
        pila.pop();
    }

    /**
     * Bucle realizado para iterar según si la pila y la cola originales están vacías, si ya se sabe 
     * o no que pila_aux es subsecuencia, o si la pila es menor que la cola.
    */

    while(!es_subsecuencia && !cola.empty() && !pila_aux.empty() && (pila_aux.size() >= cola.size()))
    {
        if (pila_aux.top() == cola.front()){
            sigue = true;

            cola.pop();
            pila_aux.pop();

            while (!pila_aux.empty() && !cola.empty() && sigue){

                if (cola.front() != pila_aux.top()){
                    sigue = false;
                }

                else{
                    cola.pop();
                    pila_aux.pop();
                }

            }

            if (sigue){
                es_subsecuencia = true;
            }
        }

        else{
            pila_aux.pop();
        }
    }

    return es_subsecuencia;



}

int main()
{
    queue<int> cola;
    stack<int> pila;

    cola.push(3);
    cola.push(8);
    cola.push(5);

    pila.push(4);
    pila.push(2);
    pila.push(3);
    pila.push(8);
    pila.push(5);

    if (Condicion(pila,cola)){
        cout << "Coinciden" << endl;
    }
    else{
        cout << "No coinciden" << endl;
    }
}