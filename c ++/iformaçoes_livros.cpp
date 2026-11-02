#include <iostream>
#include <string>

using namespace std;

struct Livro{
	string titulo;
	string autor;
	int ano;	
};

void lerDados(Livro livros[4]){
	
	for (int i = 0; i < 4; i++){
		cout << "Titulo do livro:" << endl;
		getline(cin, livros[i].titulo);
		
		cout << "Autor:" << endl;
		getline(cin, livros[i].autor);
		
		cout << "Ano:" << endl;
		cin >> livros[i].ano;
		cin.ignore();

		
		system("cls");
	}
}

void imprimirDados(Livro livros[4]){
	for (int i = 0; i < 4; i++){
		cout << "Livro " << i << endl;
		cout << "Titulo: " << livros[i].titulo << endl;
		cout << "Autor: " << livros[i].autor << endl;
		cout << "Ano: " << livros[i].ano << endl << endl;
	}
}

int main(){
	
	// Vetor de Livros
	Livro livros[4];
	
	// Cadastrar Livros
	lerDados(livros);


	// Imprimir Livros
	imprimirDados(livros);	
	
	return 0;
}