// Dado un conjunto de frutas y precio en un vector, ordenarlas de mayor a menor precio

#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

typedef pair<string,float> par;

vector <par> ordenar_frutas(const vector<par> &fp)
{
    priority_queue<par> pq;

    for (int i = 0; i < fp.size(); i++){
        if(fp[i].second < fp[i+1].second){
            par aux = fp[i+1];
            fp[i+1].insert(fp[i]);

        }
    }
    
}