#include <stdio.h>
#include <math.h>

int main() {


float numero1 ;
float numero2 ;
float numero3 ;

        printf("Digite um numero ");
    scanf("%f", &numero1);

        printf("Digite um numero ");
    scanf("%f", &numero2);

        printf("Digite um numero ");
    scanf("%f", &numero3);

float media1 = (numero1 + numero2 + numero3)/3 ;
float produto = (numero1 * numero2 * numero3);
float media2 = pow(produto, 1.0/3.0);
// rebeca sua burra nao esqueca que no float nao se usa um numero inteiro e sim numero com virgula, oun seja um PONTO

float media3 = 3 /((1/numero1) + (1/numero2) + (1/numero3));

printf("sua media aritimetica e %f\n", media1) ;
printf("sua media geometrica e %f\n", media2) ;
printf("sua media harmonica e %f\n", media3) ;

    return 0;
}
