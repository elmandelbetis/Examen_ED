// Dadas dos colas de pares de persona(dni) y año de nacimiento, crear una nueva
// cola cuyo año de nacimiento sea menor a uno dado. Los elementos que pasan 
// deben estar en el mismo orden

#include <iostream>
#include <queue>
using namespace std;

typedef pair<string,int> mipar; //sirve para acortar notaciones

struct imprime{
    int anio;
    string dni;

    friend ostream& operator<<(ostream& os, const imprime& i) {
        os << "Dni: " << i.dni << ", Anio: " << i.anio;
        return os;
    }
};

queue<mipar> FiltrarAnio(queue<mipar> &q, int anio_comp){
    
    queue<mipar> c, c_out, aux(q);

    while(!aux.empty()){

        if (aux.front().second > anio_comp){
            c.push(aux.front());
        }
        aux.pop();
    }

    while(!c.empty()){
        c_out.push(c.front());
        c.pop();
    }

    return c_out;

}

int main(){

    queue<mipar> cola, resultado;
    imprime i;
    int anio_comp = 2000;

    cola.emplace("74545420M",2002);
    cola.emplace("3729102G",1995);
    cola.emplace("5939215K",1978);
    cola.emplace("3829014U",2006);
    cola.emplace("3957208M",2005);

    resultado = FiltrarAnio(cola, anio_comp);

   /* while(!cola.empty())
    {
        mipar elemento = resultado.front();
        i.dni = elemento.first;
        i.anio = elemento.second;

        string dni = i.dni;
        int anio = i.anio;

        cout << "("<<dni<<","<<anio<<")" << " ; ";
        resultado.pop();
    }

*/
    while (!resultado.empty()) {
        std::cout << "Clave: " << resultado.front().first << ", Valor: " << resultado.front().second << std::endl;
        resultado.pop();
    }
    
    cout << endl;

}