#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
   
    string vector[4];

    cout << "Crie seu usuario:" << endl;
    cin >> vector[0];

    cout << "Crie sua senha:" << endl;
    cin >> vector[1];

    cout << "\n--- FAZER LOGIN ---" << endl;
    cout << "Digite seu usuario:" << endl;
    cin >> vector[2];

    cout << "Digite sua senha:" << endl;
    cin >> vector[3];

  
    if (vector[2] == vector[0] && vector[3] == vector[1]) {
        cout << "Login feito com sucesso!!" << endl;
    } else {
        cout << "Senha ou usuario incorreto!!" << endl;
    }

    return 0;
}