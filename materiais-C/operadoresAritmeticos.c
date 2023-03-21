#include <stdio.h>

int main() {

    //Usando alguns operadores da linguagem
    int a, b, c;
    a = 4;
    b = 3;
    c = (a * b) / 2;

    printf("Variavel \'a\' tem valor: %d\n", a);
    printf("Variavel \'b\' tem valor: %d\n", b);
    printf("Variavel \'c\' tem valor: %d\n", c);
    printf("Resto da div. entre a e b eh: %d\n", a % b);
    printf("O valor de \'-b\' eh: %d\n", -b);

    //Usando operadores de incremento e decremento
    int d, e;
    e = 3;

    d = e++;
    printf("Pos-incremento: \'d\' tem valor: %d\n", d);
    printf("Variavel \'e\' tem valor: %d\n", e);

    d = ++e;
    printf("Pre-incremento : \'d\' tem valor: %d\n", d);
    printf("Variavel \'b\' tem valor: %d\n", e);

    //Usando operadores de atribuição
    int total = 0;
    int cont = 10;

    printf("Total = %d\n", total);
    total += cont;
    printf("Total = %d\n", total);
    total += cont;
    printf("Total = %d\n", total);

    return 0;

}