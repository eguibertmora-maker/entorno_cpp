#include <iostream>

int main() {
    int arreglo[3] = {10, 20, 30};
    int* ptr = arreglo;
    
    std::cout << "Dirección RAM: " << ptr << " | Valor: " << *ptr << "\n";
    ptr++;
    std::cout << "Dirección RAM +1: " << ptr << " | Valor: " << *ptr << "\n";
    
    return 0;
}
