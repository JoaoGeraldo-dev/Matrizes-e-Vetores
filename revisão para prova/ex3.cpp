#include <iostream>
using namespace std;

// Fun��o que busca um valor em um array e retorna o ponteiro para a primeira ocorr�ncia ou nullptr
int* findValue(int* arr, int tamanho, int valor) {
    for (int i = 0; i < tamanho; ++i) {
        if (arr[i] == valor) {
            return &arr[i];  // Retorna o ponteiro para a primeira ocorr�ncia
        }
    }
    return nullptr;  // Se o valor n�o for encontrado, retorna nullptr
}

int main() {
    // Teste com array est�tico
    int arrEstatico[] = {1, 2, 3, 4, 5, 6};
    int tamanhoEstatico = sizeof(arrEstatico) / sizeof(arrEstatico[0]);

    int valor = 4;
    int* resultadoEstatico = findValue(arrEstatico, tamanhoEstatico, valor);

    if (resultadoEstatico != nullptr) {
        cout << "Valor " << valor << " encontrado no array est�tico na posi��o: " 
             << (resultadoEstatico - arrEstatico) << endl;
    } else {
        cout << "Valor " << valor << " n�o encontrado no array est�tico." << endl;
    }

    // Teste com array alocado dinamicamente
    int tamanhoDinamico = 6;
    int* arrDinamico = new int[tamanhoDinamico]{1, 2, 3, 4, 5, 6};

    valor = 3;
    int* resultadoDinamico = findValue(arrDinamico, tamanhoDinamico, valor);

    if (resultadoDinamico != nullptr) {
        cout << "Valor " << valor << " encontrado no array din�mico na posi��o: "
             << (resultadoDinamico - arrDinamico) << endl;
    } else {
        cout << "Valor " << valor << " n�o encontrado no array din�mico." << endl;
    }

    // Libera a mem�ria alocada dinamicamente
    delete[] arrDinamico;

    return 0;
}
