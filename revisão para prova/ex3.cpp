#include <iostream>
using namespace std;

// Função que busca um valor em um array e retorna o ponteiro para a primeira ocorrência ou nullptr
int* findValue(int* arr, int tamanho, int valor) {
    for (int i = 0; i < tamanho; ++i) {
        if (arr[i] == valor) {
            return &arr[i];  // Retorna o ponteiro para a primeira ocorrência
        }
    }
    return nullptr;  // Se o valor não for encontrado, retorna nullptr
}

int main() {
    // Teste com array estático
    int arrEstatico[] = {1, 2, 3, 4, 5, 6};
    int tamanhoEstatico = sizeof(arrEstatico) / sizeof(arrEstatico[0]);

    int valor = 4;
    int* resultadoEstatico = findValue(arrEstatico, tamanhoEstatico, valor);

    if (resultadoEstatico != nullptr) {
        cout << "Valor " << valor << " encontrado no array estático na posição: " 
             << (resultadoEstatico - arrEstatico) << endl;
    } else {
        cout << "Valor " << valor << " não encontrado no array estático." << endl;
    }

    // Teste com array alocado dinamicamente
    int tamanhoDinamico = 6;
    int* arrDinamico = new int[tamanhoDinamico]{1, 2, 3, 4, 5, 6};

    valor = 3;
    int* resultadoDinamico = findValue(arrDinamico, tamanhoDinamico, valor);

    if (resultadoDinamico != nullptr) {
        cout << "Valor " << valor << " encontrado no array dinâmico na posição: "
             << (resultadoDinamico - arrDinamico) << endl;
    } else {
        cout << "Valor " << valor << " não encontrado no array dinâmico." << endl;
    }

    // Libera a memória alocada dinamicamente
    delete[] arrDinamico;

    return 0;
}
