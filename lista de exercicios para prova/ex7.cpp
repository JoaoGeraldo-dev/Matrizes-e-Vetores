#include <iostream>
using namespace std;

// Função para preencher a matriz com valores
void preencherMatriz(int* matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Digite o valor para [" << i << "][" << j << "]: ";
            cin >> *(matriz + i * colunas + j);  // Aritmética de ponteiros para acessar a posição
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int* matriz, int linhas, int colunas) {
    cout << "\nMatriz 3x3:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << *(matriz + i * colunas + j) << "\t";  // Acesso via ponteiro
        }
        cout << endl;
    }
}

int main() {
    const int LINHAS = 3;
    const int COLUNAS = 3;
    int matriz[LINHAS][COLUNAS];  // Matriz 3x3

    // Passamos o ponteiro da matriz (endereço base)
    preencherMatriz(&matriz[0][0], LINHAS, COLUNAS);
    imprimirMatriz(&matriz[0][0], LINHAS, COLUNAS);

    return 0;
}
