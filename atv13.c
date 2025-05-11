#include <stdio.h>
#include <string.h> // Para strcmp()


int main() {

char genero[50] ;
float  peso;
float idade;
float altura;


        printf("Qual o seu genero? ");
    scanf("%49s", &genero);

      printf("Qual o seu peso? ");
    scanf("%f", &peso);

      printf("Qual sua idade? ");
    scanf("%f", &idade);

      printf("Qual a sua altura? ");
    scanf("%f", &altura);



float tmb_homens = 66.47+(13.75 * peso)+(5.003 * (altura * 100) )-(6.755 * idade);
float tmb_mulheres = 655.09 + (9.563 * peso) + (1.85 * (altura * 100)) - (4.676 * idade);




  if (strcmp(genero, "feminino") == 0){
        printf("Sua Taxa metabolica basal = %.3f", tmb_mulheres);
    }
    else if (strcmp(genero, "masculino") == 0){

        printf("Sua Taxa metabolica basal = %.3f" , tmb_homens);
    }
    else {
        printf("Gênero não reconhecido. Use 'feminino' ou 'masculino'.\n");
    }


    return 0;
}

