#include <stdio.h>

int main() {

    //Usando a funcao scanf 
    float anos, dias;
    printf("Digite sua idade em anos: ");
    scanf("%f", &anos);
    dias = anos * 365;
    printf("Sua idade em dias: %.0f\n", dias);

    return 0;

}