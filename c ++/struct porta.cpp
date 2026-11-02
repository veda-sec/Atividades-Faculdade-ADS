#include <iostream>
#include <string>
using namespace std;


struct porta{
    bool aberta = false;
    
    void abrir()  { aberta = true; }
    void fechar() { aberta = false;}
    
    void mostrar(){
        if (aberta)
        cout << "A porta está aberta." << endl;
        cout << "A porta está fechada" << endl;
    }
    
};


int main(){
    
    porta p;
    string controle;
    
    cout << "Digite 'abrir' ou 'fechar':" << endl;
    cin >> controle;
    
    if (controle == "abrir")
      p.abrir();
    else if (controle == "fechar")
      p.fechar();
    
    p.mostrar();
    return 0;
}