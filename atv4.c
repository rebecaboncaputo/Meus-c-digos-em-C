#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int mes_aniv;
    int dia_aniv;
    int diff;
    printf("Digite o dia do seu aniversario: ");
    scanf("%d",&dia_aniv);
    printf("Digite o m�s do seu anivers�rio: ");
    scanf("%d",&mes_aniv);
    if (mes_aniv==4){
            diff= dia_aniv-3;
            if(diff==0){
                printf("Feliz anivers�rio!");
            }else if(diff>0){
                printf("Faltam %d dias para seu anivers�rio\n",diff);
            }else{
                printf("Passaram %d dias do seu anivrs�rio\n",diff);
            }

    }else if(mes_aniv==5){
        printf("Faltam %d dias para o seu anivers�rio\n", (30 - 3) + dia_aniv); // abril
    }
    else if (mes_aniv == 6) {
        printf("Faltam %d dias para o seu anivers�rio\n", (30 - 3) + 31 + dia_aniv); // abril + maio
    }
    else if (mes_aniv == 7) {
        printf("Faltam %d dias para o seu anivers�rio\n", (30 - 3) + 31 + 30 + dia_aniv); // abril + maio + junho
    }
    else if (mes_aniv == 8) {
        printf("Faltam %d dias para o seu anivers�rio\n", (30 - 3) + 31 + 30 + 31 + dia_aniv); // at� julho
    }
    else if (mes_aniv == 9) {
        printf("Faltam %d dias para o seu anivers�rio\n", (30 - 3) + 31 + 30 + 31 + 31 + dia_aniv); // at� agosto
    }
    else if (mes_aniv == 10) {
        printf("Faltam %d dias para o seu anivers�rio\n", (30 - 3) + 31 + 30 + 31 + 31 + 30 + dia_aniv); // at� setembro
    }
    else if (mes_aniv == 11) {
        printf("Faltam %d dias para o seu anivers�rio\n", (30 - 3) + 31 + 30 + 31 + 31 + 30 + 31 + dia_aniv); // at� outubro
    }
    else if (mes_aniv == 12) {
        printf("Faltam %d dias para o seu anivers�rio\n", (30 - 3) + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia_aniv); // at� novembro
    }
    else if (mes_aniv == 3) {
        printf("Passaram %d dias do seu anivers�rio\n", 3 + (31 - dia_aniv)); // mar�o
    }
    else if (mes_aniv == 2) {
        printf("Passaram %d dias do seu anivers�rio\n", 3 + 31 + (28 - dia_aniv)); // fevereiro
    }
    else if (mes_aniv == 1) {
        printf("Passaram %d dias do seu anivers�rio\n", 3 + 31 + 28 + (31 - dia_aniv)); // janeiro
    }
    else {
        printf("M�s inv�lido.\n");
    }

    return 0;
}
