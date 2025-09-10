#include <iostream>
using namespace std;

// Função que calcula a média dos valores no array
double calcularMedia(int* arr, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += arr[i];  // Soma todos os elementos do array
    }
    return static_cast<double>(soma) / tamanho;  // Retorna a média
}

int main() {
    int tamanho;

    // Pede ao usuário o número de elementos para o array
    cout << "Digite o número de elementos do array: ";
    cin >> tamanho;

    // Aloca dinamicamente o array
    int* arr = new int[tamanho];

    // Pede ao usuário para preencher o array
    cout << "Digite os elementos do array:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Calcula e exibe a média
    double media = calcularMedia(arr, tamanho);
    cout << "A média dos valores no array é: " << media << endl;

    // Libera a memória alocada
    delete[] arr;

    return 0;
}
