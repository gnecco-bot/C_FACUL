// como obter endereço de memória?
// pode ser feito de maneira estática ou dinâmica
// Ponteiro aponta para um local da memoria que se armazena determinado dado

#include <iostream>

int main() {

// * = declara que a variavel será um ponteiro
// & = declara que 

// Declarando variáveis  
int alpha;
int* intPointer;
alpha = 1;

// Inicializando o ponteiro
// intPointer irá apontar para o valor armazenado em alpha
intPointer = &alpha;
std::cout << "esse é o valor com asteristico * " << *intPointer << " e esse será um valor sem asteristico " << intPointer << std::endl;

}