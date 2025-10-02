#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
    string titulos[5];
    int anos[5], quantidade = 0, opcao = 0;
    while (opcao != 4) {
    cout << "\n=== MENU ===\n";
    cout << "1. Adicionar Livro\n";
    cout << "2. Listar Livros\n";
    cout << "3. Procurar Livro\n";
    cout << "4. Sair\n";
    cout << "Escolha: ";
    cin >> opcao;
    switch (opcao) {
    case 1:
    if (quantidade < 5) {
    cin.ignore();
    cout << "Titulo: ";
    getline(cin, titulos[quantidade]);
    cout << "Ano: ";
    cin >> anos[quantidade];
    quantidade++;
    } else {
    cout << "Catalogo cheio.\n";
    }
    break;
    case 2:
    cout << "Listagem dos Livros:\n";
    if (quantidade == 0) {
    cout << "Nenhum livro no catalogo.\n";
    } else {
    for (int i = 0; i < quantidade; i++) {
    cout << i + 1 << " - " << titulos[i] << " (" << anos[i] << ")\n";
    }
    }
    break;
    case 3: {
    cin.ignore();
    string tituloProcurado;
    cout << "Introduza o titulo a procurar: ";
    getline(cin, tituloProcurado);
    int encontrado = -1;
    for (int i = 0; i < quantidade; i++) {
    if (titulos[i] == tituloProcurado) {
    encontrado = i;
    break;
    }
    }
    if (encontrado != -1) {
    cout << "Encontrado: " << titulos[encontrado] << " (" << anos[encontrado] << ")\n";
    } else {
    cout << "Livro nao encontrado.\n";
    }
    break;
    }
    case 4:
    cout << "A sair...\n";
    break;
    default:
    cout << "Opção invalida.\n";
    }
    }
    return 0;
}

