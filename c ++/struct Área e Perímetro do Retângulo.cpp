#include <iostream>
using namespace std;

struct retangulo {
    float largura;
    float altura;
    
    void imprimir() {
    cout << "largura" << largura << endl;
    cout << "altura" << altura << endl;
    }

   float calcularArea() {
    return (largura * altura);
}

    float calcularPerimetro() {
    return (2*largura + 2*altura); 
    
}
};




int main() 

{
    retangulo largura;
    cout << "digite o valor da largura" << endl;
    cin >> largura.largura; 
    
    cout << "digite o valor da altura" << endl;
    cin >> largura.altura; 
    
    cout << largura.calcularArea() << endl;
    
    cout << largura.calcularPerimetro() << endl; 
    

    return 0;
}