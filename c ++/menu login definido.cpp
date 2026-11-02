#include <iostream>
#include <string>

using namespace std;

#define LOGIN "User1"
#define SENHA "senha"

int main() {
    string login, senha, nome;
    int idade;

    
    cout << "---PAINEL ADMIN---" << endl; 
    

    cout << "Login: ";
    cin >> login;

    cout << "Senha: ";
    cin >> senha;

    if (login == LOGIN && senha == SENHA) {
        cout << "Bem-vindo, " << login << "!" << endl;
        
        cin.ignore(); // Limpa o 'Enter' que sobrou do cin >> senha

        cout << "Digite seu nome: ";
        getline(cin, nome);

        cout << "Olá " << nome << ", seja bem-vindo!" << endl;
        
        cout << "Digite sua idade: ";
        cin >> idade;
        cout << "Você tem " << idade << " anos." << endl;

    } else {
        cout << "Login incorreto!" << endl;
    }

    return 0;
}   