#include <iostream>
using namespace std;

// Função que lê e retorna as 3 notas do aluno
void lerNotas(double& n1, double& n2, double& n3) {
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
}

// Função que ordena as 3 notas em ordem crescente
void ordenarNotas(double& n1, double& n2, double& n3) {
    if (n1 > n2) swap(n1, n2);
    if (n2 > n3) swap(n2, n3);
    if (n1 > n2) swap(n1, n2);
}

int main() {
    double nota1, nota2, nota3;
    
    lerNotas(nota1, nota2, nota3);
    ordenarNotas(nota1, nota2, nota3);
    
    cout << "Notas em ordem crescente: " << nota1 << ", " << nota2 << ", " << nota3 << endl;
    

}
