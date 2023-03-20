#include <stdio.h>

int main() {
    
    //Manipulando a função printf()
    printf("Os alunos sao %d.\n", 350);
    printf("Os alunos sao %6d.\n", 350);
    printf("Os alunos sao %06d.\n", 350);
    printf("%f\n%f\n", 3456.78, 6.78);
    printf("%10.1f\n%10.1f\n", 3456.78, 6.78);
    printf("%-10.3f\n%-10.3f\n", 3456.78, 6.78);

    //Manipulando a função printf() com a tabela ASCII
    printf("%d %c %x %o\n", 'A', 'A', 'A', 'A');
    printf("%c %c %c %c\n", 'A', 65, 0x41, 0101);

    return 0;

}