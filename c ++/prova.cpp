#include <iostream>
#include <string>
using namespace std;

struct Interprete {
    string nome;
    string nacionalidade;

    void lerDados() {
        cout << "digite o nome do cantor" << endl;
        getline(cin, nome);
        cout << "digite a nacionalidade do cantor" << endl;
        getline(cin, nacionalidade);
    }

    void imprimir() {
        cout << "O nome do Cantor e: " << nome << endl;
        cout << "A nacionalidade do Cantor e: " << nacionalidade << endl;
    }
};

struct musica {
    string titulo;
    int ano;
    Interprete interprete;
};

void imprimirMenu() {
    cout << "[1] Cadastrar musicas" << endl;
    cout << "[2] Exibir musicas" << endl;
    cout << "[3] Ordenar musicas" << endl;
    cout << "[0] Sair" << endl << endl;
}


void cadastrarMusicas(musica vetor[], int &qtd, int MAX) {
    if (qtd >= MAX) {
        cout << "Vetor cheio!" << endl;
        return;
    }
    cout << "Titulo: ";
    getline(cin, vetor[qtd].titulo);
    cout << "Ano: ";
    cin >> vetor[qtd].ano;
    cin.ignore();
    vetor[qtd].interprete.lerDados();
    qtd++;
    cout << "Cadastrada com sucesso!" << endl;
}

void exibirMusicas(musica vetor[], int qtd) {
    if (qtd == 0) {
        cout << "Nenhuma musica cadastrada." << endl;
        return;
    }
    for (int i = 0; i < qtd; i++) {
        cout << (i + 1) << ". " << vetor[i].titulo
             << " (" << vetor[i].ano << ")" << endl;
        vetor[i].interprete.imprimir();
        cout << endl;
    }
}

void ordenarMusicas(musica vetor[], int qtd) {
    for (int i = 0; i < qtd - 1; i++)
        for (int j = 0; j < qtd - 1 - i; j++)
            if (vetor[j].titulo > vetor[j + 1].titulo)
                swap(vetor[j], vetor[j + 1]);
    cout << "Ordenadas!" << endl;
}

int main() {
    const int MAX = 6;
    musica vetor[MAX];  
    int qtd = 0;
    int opcao;

    do {
        imprimirMenu();          
        cin >> opcao;
        cin.ignore();           

        switch (opcao) {
            case 1:
                cadastrarMusicas(vetor, qtd, MAX);
                break;
            case 2:
                exibirMusicas(vetor, qtd);
                break;
            case 3:
                ordenarMusicas(vetor, qtd);
                break;
            case 0:
                cout << "Até mais!" << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 0);

    return 0;
}   