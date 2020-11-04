#include <iostream>
#include "arreglo.h"
#include "computadora.h"
using namespace std;

int main(){
    Arreglo<Computadora> compus;

    Computadora c01("Dell", "Windows", 6, 100);
    Computadora c02("Mac", "IOS", 8, 500);
    Computadora c03("Thinkpad", "Linux", 2, 50);

    Computadora c04("Dell", "Windows", 6, 200);
    Computadora c05("HP", "Linux", 4, 150);

    compus << c01 << c02 << c03 << c01 << c01;

    if(compus.buscar(c04)!=nullptr){
        cout<<*compus.buscar(c04)<<endl;
    }else{
        cout<<"La posicion no existe"<<endl;
    }

    if(compus.buscar(c05)!=nullptr){
        cout<<*compus.buscar(c05)<<endl;
    }else{
        cout<<"La posicion no existe"<<endl;
    }

    Arreglo<Computadora*> ptrs = compus.buscar_todos(c04);

    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++){
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }else{
        cout << "No existen coincidencias" << endl;
    }

    return 0;
}
