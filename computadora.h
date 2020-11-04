
#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora{
    string nombre;
    string so;
    int ram;
    float precio;
public:
    Computadora();
    Computadora(const string &n, const string &s, int r, float p);
    void setNombre(const string &value);
    string getNombre() const;

    void setSo(const string &value);
    string getSo() const;

    void setRam(int value);
    int getRam() const;

    void setPrecio(float value);
    float getPrecio() const;

    friend ostream& operator<<(ostream &out, const Computadora &p){
        out << left ;
        out << setw(10) << p.nombre;
        out << setw(10) << p.so;
        out << setw(8)  << p.ram;
        out << setw(6)  << p.precio;
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, Computadora &p){
        // string temp;
        // float fuerza;
        // int salud;

        cout << "Nombre: ";
        getline(cin, p.nombre);

        cout << "So: ";
        getline(cin, p.so);

        cout << "Ram: ";
        cin >> p.ram;

        cout << "Precio: ";
        cin >> p.precio;

        return in;
    }

    bool operator==(const Computadora& p){
        return nombre == p.nombre;
    }
    bool operator==(const Computadora& p) const{
        return nombre == p.nombre;
    }
};
#endif // COMPUTADORA
