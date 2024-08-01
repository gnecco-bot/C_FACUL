#include <iostream>
// maneira dinamica de cria um poteiro para guarda dados
// new e delete
// sempre abrir e depois fechar a memoria aberta manualmente
// para evitar vazamento de memoria desnecessaria
// ponteiro nao armazena informação, apenas o endereço da memoria apontado
// ao usar *ponteiro o valor retornado é da variavel em que esta apontando
// um poteiro apontando ao vazio é usado a constante NULL que esta no pacote cstddef

int main(){
    int* intPointer;
    intPointer = new int;
    // delete intPointer;
}