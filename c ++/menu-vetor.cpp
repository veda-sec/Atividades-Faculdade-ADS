#include <iostream>
using namespace std;


bool lido = false;
float v[8]; 
void menu() {
    cout << "\n1 - Leitura\n2 - Imprimir o vetor\n3 - Imprimir o maior elemento\n4 - Calcular a soma dos elementos\n0 - Sair\nOpcao: ";
}

void ler() {
    cout << "Digite 8 numeros:\n";
    
    for (int i = 0; i < 8; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }
    lido = true;
}

void imprimir() {
    if (!lido) { cout << "O vetor está vazio\n"; return; }
    for (int i = 0; i < 8; i++) cout << v[i] << " ";
    cout << "\n";
}

float maior() {
    float m = v[0];
    
    for (int i = 1; i < 8; i++) if (v[i] > m) m = v[i];
    return m;
}

float soma() {
    float s = 0;
    
    for (int i = 0; i < 8; i++) s += v[i];
    return s;
}

int main() {
    int op;
    do {
        menu();
        cin >> op;
        if (op == 1) ler();
        else if (op == 2) imprimir();
        else if (op == 3) cout << (!lido ? "O vetor está vazio\n" : to_string(maior()) + "\n");
        else if (op == 4) cout << (!lido ? "O vetor está vazio\n" : to_string(soma()) + "\n");
    } while (op != 0);
}
