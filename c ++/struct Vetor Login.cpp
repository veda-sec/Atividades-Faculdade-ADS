#include <iostream>
#include <string>
#include <cstdlib> // Para system("pause") se necessário

using namespace std;

// Definição da Struct
struct login {
    string usuario;
    string senha;
};

int main() {
    // Instancia o array de 2 usuários
    login usuarios[2];
    bool acessoPermitido = false;

    // 1. Cadastro (Preenchendo dados para teste)
    // Na prática, você usaria loops e cin para capturar do usuário
    usuarios[0].usuario = "admin";
    usuarios[0].senha = "1234";
    
    usuarios[1].usuario = "usuario1";
    usuarios[1].senha = "senha1";

    // 2. Tela de Login
    string entradaUsuario, entradaSenha;
    
    cout << "=== SISTEMA DE LOGIN ===" << endl;
    cout << "Digite o usuário: ";
    cin >> entradaUsuario;
    cout << "Digite a senha: ";
    cin >> entradaSenha;

    // 3. Validação
    for (int i = 0; i < 2; i++) {
        if (usuarios[i].usuario == entradaUsuario && usuarios[i].senha == entradaSenha) {
            acessoPermitido = true;
            break;
        }
    }

    // 4. Resultado
    if (acessoPermitido) {
        cout << "Login realizado com sucesso!" << endl;
    } else {
        cout << "Usuário ou senha incorretos." << endl;
    }

    return 0;
}   