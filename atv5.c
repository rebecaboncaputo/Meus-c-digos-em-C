#include <stdio.h>

int main() {

float preco_original ;


        printf(" Escreva o preco do produto: ");
    scanf("%f",&preco_original);

float desconto_1 = preco_original*0.20;
float desconto_2 =  preco_original - desconto_1 ;

        //printf(" %.2f %.2f ", desconto_1 , desconto_2); //.3 serve para limitar o numero de casa dps da virgula

printf("  * ----------------------------------- *\n ");
printf(" |          Resumo do Pedido           |\n ");
printf(" * ----------------------------------- *\n ");
printf(" | Preco original: R$ %.2f            |\n" , preco_original );
printf("  | Desconto: R$ %.2f                   |\n" , desconto_1 );
printf("  | Produto com o desconto: R$ %.2f     |\n" , desconto_2 );
printf("  * ----------------------------------- *\n ");

    return 0;
}

