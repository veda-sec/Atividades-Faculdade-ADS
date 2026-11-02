#include <iostream>
# include <string>
using namespace std;

struct Estudante {
string nome;
float nota1;
float nota2;
float nota3;

float calcularMedia(){
 return (nota1 + nota2 + nota3) / 3;    
    
}

void imprimir(){
    cout << "Nome:" << nome << endl;
    cout << "Nota 1:" << nota1 << endl;
    cout << "Nota 2:" << nota2 << endl;
    cout << "Nota 3:" << nota3 << endl;
    cout << "Media: " << calcularMedia() << endl;
}


void lerDados(){
    cout << "Infome o nome" << endl;
    getline(cin, nome);
    
    cout << "digite a primeira nota" << endl;
    cin >> nota1 ;
    
    cout << "digite a segunda nota" << endl;
    cin >> nota2 ;
    
    cout << "digite a terceira nota" << endl;
    cin >> nota3 ;
}

};



int main()
{
    
Estudante Estudante;
Estudante.lerDados();
cout << "sua media é: " << Estudante.calcularMedia() << endl;

    return 0;
}