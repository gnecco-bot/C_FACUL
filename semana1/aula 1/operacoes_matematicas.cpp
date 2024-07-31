#include <iostream> // inclui a biblioteca padrão para utilizar objetios comom: cout e cin

using namespace std; // torna nao necessario o adicionamento do "std::"


int main() { // tipo // funcao // execução principal
    int number1; // declaração da variavel do tipo inteiro
    int number2, teste; // há como declara mais de uma variavel na mesma linha
    
    std::cout << "Digite o primeiro numero: "; // count imprime a saida (print)
    std::cin >> number1; // cin recebe valor (input)
    std::cout << "Digite o segundo numero: "; // << concatena valores da direita a esquerda
    std::cin >> number2; // >> concatena valor da querda a direita

    int sum = number1 + number2; // sum terá valor da soma de n1 e n2
    int sub = number1 - number2; // sub terá valor da subtração de number
    int mul = number1 * number2; // mul terá valor da multiplicação 
    int div = number1 / number2; // div terá valor da divisão inteira
    float fdiv = (float)number1 / (float)number2; // terá valor da divisão real
    int res = number1 % number2; // terá valor do resto
    
    std::cout << "Soma: " << sum << std::endl; // endl pula uma linha
    std::cout << "Subtração: " << sub << std::endl; 
    std::cout << "Multiplicação: " << mul << std::endl;
    std::cout << "Divisão inteira: " << div << std::endl;
    std::cout << "Divisão real: " << fdiv << std::endl;
    std::cout << "Resto da divisão: " << res << std::endl;
}

