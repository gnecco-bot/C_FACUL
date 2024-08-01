// Ao criar uma funcao e seu parametro tiver * asteristico + variavel
// será um parametro do tipo valor, na qual nao modifica a variavel
// no escopo global
// A funcao tendo & (e comercial) + variavel será um dado
// que terá o cado modificado no escopo global do seu scrirpt


// #include <iostream>

// int main() {
//     float zero;
//     zero = 0;

//     std::cout << zero << std::endl;
// }

#include <stdio.h>
int um_de_dois (int num1, int num2); //declaração da função//
int main () {
int a = 100; // definição de variáveis locais//
int b = 20;
int ret_um;ret_um = um_de_dois(a, b);//chamada da função//
printf("O valor é: %d\n",ret_um);
return 0;
}

int  um_de_dois (int num1, int num2){
int result; // declaração de variáveis locais //
if (num1 > num2)
    result = num1;
else
   result = num2;
 return result;
}