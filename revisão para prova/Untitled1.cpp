#include <iostream>
using namespace std;

// Função swap que troca os valores dos dois inteiros apontados pelos ponteiros
void swap(int* a, int* b) {
    int temp = *a;  // Armazena o valor de a em uma variável temporária
    *a = *b;        // Atribui o valor de b a a
    *b = temp;      // Atribui o valor armazenado em temp a b
}

int main() {
    int x,y;
    
    cout << "digite o valor de x: " << endl;
    cin>>x;
    cout << "digite o valor de y: " << endl;
    cin>>y;

    // Imprime os valores antes da troca
    cout << "Antes da troca: x = " << x << ", y = " << y << endl;

    // Chama a função swap passando os endereços de x e y
    swap(&x, &y);

    // Imprime os valores depois da troca
    cout << "Depois da troca: x = " << x << ", y = " << y << endl;

    return 0;
}
