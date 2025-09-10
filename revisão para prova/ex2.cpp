#include <iostream>
using namespace std;

// Fun��o que calcula a m�dia dos valores no array
double calcularMedia(int* arr, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += arr[i];  // Soma todos os elementos do array
    }
    return static_cast<double>(soma) / tamanho;  // Retorna a m�dia
}

int main() {
    int tamanho;

    // Pede ao usu�rio o n�mero de elementos para o array
    cout << "Digite o n�mero de elementos do array: ";
    cin >> tamanho;

    // Aloca dinamicamente o array
    int* arr = new int[tamanho];

    // Pede ao usu�rio para preencher o array
    cout << "Digite os elementos do array:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Calcula e exibe a m�dia
    double media = calcularMedia(arr, tamanho);
    cout << "A m�dia dos valores no array �: " << media << endl;

    // Libera a mem�ria alocada
    delete[] arr;

    return 0;
}
