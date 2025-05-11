#include <stdio.h>

int main() {

int numero1 ;
int numero2 ;
int numero3 ;

        printf("Digite um numero ");
    scanf("%d", &numero1);

        printf("Digite um numero ");
    scanf("%d", &numero2);

        printf("Digite um numero ");
    scanf("%d", &numero3);


     if (numero1 > numero2 && numero1 > numero3) {
        printf("O maior numero e %d", numero1);

        } else if (numero2 > numero1 && numero2 > numero3) {
        printf("O maior numero e %d", numero2);

    } else {
        printf("O maior numero e %d", numero3);
    }

//nao usar ,e sim &&


    return 0;
}
