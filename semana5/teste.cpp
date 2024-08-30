#include <iostream>

int * p; /*declara um ponteiro*/
int q = 10; /*valor aleatorio*/
int p = &q; /*endereço de "q" será guardado ao ponteiro "p"*/
int q = *p; /*"q" recebera o valor apontado por "p"*/

struct S{
    int x;
    char y;
};
struct S b, a = {10,'a'};

struct ponto{
    int x;
    int y;
};
struct retangulo{
    struct ponto p1;
    struct ponto p2;
}ret;

int main(void){
    b.x = a.x * 2;
    b.y += 3;
    std::cout << a.x << b.x << b.y << std::endl;
    printf("%d, %d, %c", a.x, b.x, b.y);
    std::cout << std::endl;
    ret.p1.x = 10;
    ret.p1.y = 10;
    ret.p2.x = 50;
    ret.p2.y = 20;
    printf("%d, %d, %d, %d", ret.p1.x, ret.p1.y, ret.p2.x, ret.p2.y);
}