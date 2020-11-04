#include "Computadora.h"

Computadora::Computadora(){
}

Computadora::Computadora(const string &n, const string &s, int r, float p){
    this->nombre = n;
    this->so = s;
    this->ram = r;
    this->precio = p;
}

void Computadora::setNombre(const string &value){
    nombre = value;
}
string Computadora::getNombre() const{
    return nombre;
}

void Computadora::setSo(const string &value){
    so = value;
}
string Computadora::getSo() const{
    return so;
}

void Computadora::setRam(int value){
    ram = value;
}
int Computadora::getRam() const{
    return ram;
}


void Computadora::setPrecio(float value){
    precio = value;
}
float Computadora::getPrecio() const{
    return precio;
}
