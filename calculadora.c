#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
int opcao;
float x,y,i;
setlocale(LC_ALL, "Portuguese");

   printf("+++ Exercicio + Calculadora +++\n");
   printf("========= by Michel ===========\n");
   printf("============ Menu =============\n");
   printf("(1) -> Subtração\n");
   printf("(2) -> Soma\n");
   printf("(3) -> Produto\n");
   printf("(4) -> Divisão\n");
   printf("===============================\n\n");

    i=0;
    while (i <= 4){
    printf("=> Número: ");
    scanf("%f",&x);
    printf("=> Número: ");
    scanf("%f",&y);
    printf("==> Escolha uma opção: ");
    scanf("%d",&opcao);
    i++;

    switch (opcao){
    case 1:
        printf("===> Opção escolhida foi SUBTRAÇÃO!\n");
        printf("=>A subtração é: %f\n", x-y);
        printf("===============================\n\n");
    break;

    case 2:
        printf("===> Opção escolhida foi SOMA!\n");
        printf("=> A soma é: %f\n", x+y);
        printf("===============================\n\n");
    break;

    case 3:
        printf("===> Opção escolhida foi PRODUTO!\n");
        printf("=> O produto é: %f\n", x*y);
        printf("===============================\n\n");
    break;

    case 4:
        printf("===> Opção escolhida foi DIVISÃO!\n");
        printf("=> A divisão é: %f\n", x/y);
        printf("===============================\n\n");
    break;

    default:
    printf ("===> Opção incorreta!\n");
    }
    }
return 0;

}
