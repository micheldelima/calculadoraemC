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
   printf("(1) -> Subtra��o\n");
   printf("(2) -> Soma\n");
   printf("(3) -> Produto\n");
   printf("(4) -> Divis�o\n");
   printf("===============================\n\n");

    i=0;
    while (i <= 4){
    printf("=> N�mero: ");
    scanf("%f",&x);
    printf("=> N�mero: ");
    scanf("%f",&y);
    printf("==> Escolha uma op��o: ");
    scanf("%d",&opcao);
    i++;

    switch (opcao){
    case 1:
        printf("===> Op��o escolhida foi SUBTRA��O!\n");
        printf("=>A subtra��o �: %f\n", x-y);
        printf("===============================\n\n");
    break;

    case 2:
        printf("===> Op��o escolhida foi SOMA!\n");
        printf("=> A soma �: %f\n", x+y);
        printf("===============================\n\n");
    break;

    case 3:
        printf("===> Op��o escolhida foi PRODUTO!\n");
        printf("=> O produto �: %f\n", x*y);
        printf("===============================\n\n");
    break;

    case 4:
        printf("===> Op��o escolhida foi DIVIS�O!\n");
        printf("=> A divis�o �: %f\n", x/y);
        printf("===============================\n\n");
    break;

    default:
    printf ("===> Op��o incorreta!\n");
    }
    }
return 0;

}
