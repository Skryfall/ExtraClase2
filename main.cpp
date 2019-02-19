#include <iostream>

void foo(int num) {
    std::cout << "Entró el numero:" << std::endl;
    std::cout << num << std::endl;
}

class Punteros{

public:

    void punteroDeFuncion();
    void punteroDeVariable();
    void punteroDePuntero();
    void punteroDeArray();
    void aritmeticaDePunteros();

};


void Punteros::punteroDeFuncion() {
    //Los punteros de función apuntan al código, no a memoria.
    std::cout << "La función se llama foo:" << std::endl;
    foo(5);
    void (*fooptr)(int);
    fooptr = &foo;
    std::cout << "El puntero de la función es:" << std::endl;
    std::cout << fooptr << std::endl;
}

void Punteros::punteroDeVariable() {
    int num = 1;
    std::cout << "La variable es:" << std::endl;
    std::cout << num << std::endl;
    int* numptr = &num;
    std::cout << "El puntero apunta a la posición:" << std::endl;
    std::cout << numptr << std::endl;
    std::cout << "el cual es la posición de la variable." << std::endl;
}

void Punteros::punteroDePuntero() {
    int num = 2;
    std::cout << "La variable es:" << std::endl;
    std::cout << num << std::endl;
    int* numptr = &num;
    std::cout << "El puntero de la variable es:" << std::endl;
    std::cout << numptr << std::endl;
    int** numptrptr = &numptr;
    std::cout << "El puntero del puntero es:" << std::endl;
    std::cout << numptrptr << std::endl;
}

void Punteros::punteroDeArray() {
    int array[5] = {1,2,3,4,5};
    std::cout << "El array es:" << std::endl;
    for (int i = 0; i != 5; i++)
        std::cout << array[i] << std::endl;
    int* arrayptr = array;
    std::cout << "El puntero es:" << std::endl;
    std::cout << arrayptr << std::endl;
}

void Punteros::aritmeticaDePunteros() {
    int array[5] = {1,2,3,4,5};
    std::cout << "El array es:" << std::endl;
    for (int i = 0; i != 5; i++)
        std::cout << array[i] << std::endl;
    int* arrayptr = &array[0];
    std::cout << "El puntero a la primer posición del array es:" << std::endl;
    std::cout << arrayptr << std::endl;
    std::cout << "Se cambian numeros del array con el puntero:" << std::endl;
    *arrayptr = 100;
    *(arrayptr + 1) = 56;
    *(arrayptr + 3) = 76;
    std::cout << "El nuevo array es:" << std::endl;
    for (int i = 0; i != 5; i++)
        std::cout << array[i] << std::endl;
}

int main() {
    Punteros punteros;
    //punteros.punteroDeFuncion();
    //punteros.punteroDeVariable();
    //punteros.punteroDePuntero();
    //punteros.punteroDeArray();
    //punteros.aritmeticaDePunteros();
    return 0;
}
