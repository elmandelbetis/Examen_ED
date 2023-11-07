#include <vector>
#include <iostream>
using namespace std;

void CambiaPares(vector<int> &v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end();++it)
    {
        if (*(it) % 2 == 0){
            *it = -1;
        }
    }
}

void Reverso(vector<int> &v){

    vector<int>::reverse_iterator rit = v.rbegin();
    
    for(; rit != v.rend(); ++rit)
    {
        cout << *rit << " ";
    }

}

int main()
{
    vector<int> v = {42, 17, 81, 59, 23, 6, 37, 50, 12, 65, 98, 31, 74, 2, 55};
    CambiaPares(v);
    Reverso(v);
    
    cout << endl;
    
    return 0;
}