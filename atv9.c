#include <stdio.h>
#include <math.h>

int main() {

float numero1 ;
float numero2 ;
float numero3 ;
float numero4 ;

        printf("Digite um numero ");
    scanf("%f", &numero1);

        printf("Digite um numero ");
    scanf("%f", &numero2);

        printf("Digite um numero ");
    scanf("%f", &numero3);

        printf("Digite um numero ");
    scanf("%f", &numero4);

 float media1 = (numero1 + numero2 + numero3 + numero4)/4 ;


 float submedia1 = numero1 - media1;
 float submedia2 = numero2 - media1;
 float submedia3 = numero3 - media1;
 float submedia4 = numero4 - media1;

 float quadrado1 = submedia1*submedia1;
 float quadrado2 = submedia2*submedia2;
 float quadrado3 = submedia3*submedia3;
 float quadrado4 = submedia4*submedia4;

float somadosquadrados = quadrado1 + quadrado2 + quadrado3 + quadrado4;
float variancia = somadosquadrados / 4;
float variancia2 = somadosquadrados / 3;


float desvio_padrao = sqrt(variancia);


    printf("media aritimetica simples = %.3f\n", media1  );
    printf("variancia populacional = %.3f\n", variancia  );
    printf("variancia amostral = %.3f\n", variancia2  );
    printf("desvio padrao = %.3f\n", desvio_padrao );





    return 0;

}
