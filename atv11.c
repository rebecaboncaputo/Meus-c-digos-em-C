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


     if (numero1 > numero2
         && numero1 > numero3
         && numero2 > numero3
         && numero3 < numero1
         && numero3 < numero2)

            {printf("a ordem e %d %d %d", numero1, numero2, numero3);


        } else if (numero2 > numero1
                   && numero2 > numero3
                   && numero3 > numero1
                   && numero1 < numero2
                   && numero1 < numero3  )

            {printf("a ordem e %d %d %d", numero2, numero3, numero1);

    } else if (numero2 > numero1
                   && numero3 > numero2
                   && numero2 > numero1
                   && numero1 < numero2
                   && numero1 < numero3  )


    {printf("A ordem e %d %d %d", numero3, numero2, numero1);
    }
    else if (numero1 > numero3
                   && numero1 > numero2
                   && numero3 > numero2
                   && numero2 < numero1
                   && numero2 < numero3  )


    {printf("A ordem e %d %d %d", numero1, numero3, numero2);
    }

    else if (numero2 > numero1
                   && numero2 > numero3
                   && numero1 > numero3
                   && numero3 < numero2
                   && numero3 < numero1  )


    {printf("A ordem e %d %d %d", numero2, numero1, numero3);
    }
    else {
          printf("A ordem e %d %d %d", numero3, numero1, numero2);
        }


//nao usar ,e sim &&


    return 0;
}
