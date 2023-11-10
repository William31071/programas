#include <iostream>
using namespace std;

int main () {
    int edades [] = {18, 20, 24, 28, 30, 32};
    int * ptr;
    
    ptr = edades;
    
    cout << "trabajo con enteros:" << endl << endl;
    cout << "la direccion del primer elemento es:" << ptr << endl;
    cout << "el valor del primer elemento es:" << *ptr << endl << endl;
    
    cout << "la direccion del segundo elemento es:" << ptr+1 << endl;
    cout << "el valor del segundo elemento es:" << *(ptr+1) << endl << endl;
    
    cout << "la direccion del tercer elemento es:" << ptr+2 << endl;
    cout << "el valor del tercer elemento es:" << *(ptr+2) << endl << endl;
    
    cout << "la direccion del quinto elemento es:" << ptr+4 << endl;
    cout << "el valor del quinto elemento es:" << *(ptr+4) << endl << endl;
    
    cout << "la direccion del sexto elemento es:" << ptr+5 << endl;
    cout << "el valor del sexto elemento es:" << *(ptr+5) << endl << endl;
    
    cout << "trabajo con cadenas:" << endl << endl;
    char cadena [] = "ciberseguridad";
    char* ptrc = cadena;
    
    cout << "la direccion del primer elemento es:" << (void*)ptrc << endl;
    cout << "el valor del primer elemento es: " << *ptrc << endl << endl;
    
    cout << "la direccion del segundo elemento es:" << (void*)(ptrc+1) << endl;
    cout << "el valor del segundo elemento es: " << *(ptrc+1) << endl << endl;
    
    cout << "la direccion del tercer elemento es:" << (void*)(ptrc+2) << endl;
    cout << "el valor del tercer elemento es: " << *(ptrc+2) << endl << endl;
    
    cout << "la direccion del cuarto elemento es:" << (void*)(ptrc+3) << endl;
    cout << "el valor del cuarto elemento es: " << *(ptrc+3) << endl << endl;
    
    cout << "la direccion del quinto elemento es:" << (void*)(ptrc+4) << endl;
    cout << "el valor del quinto elemento es: " << *(ptrc+4) << endl << endl;
    
    return 0;
}
