#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int op;
    float n1, n2, r;
    printf("--------Calculadora Simples--------");
    printf("\n\t      1 para +");
    printf("\n\t      2 para -");
    printf("\n\t      3 para x");
    printf("\n\t      4 para /");
    printf("\n-----------------------------------");
    printf("\nInforme o numero referente ao operador que deseja utilizar: ");
    scanf("%i", &op);
    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o segundo numero: ");
    scanf("%f", &n2);

    switch(op){
        case 1:
            r = (n1 + n2);
            printf("%.0f + %.0f = %.0f", n1, n2, r);
            break;
        case 2:
            r = (n1 - n2);
            printf("%.0f - %.0f = %.0f", n1, n2, r);
            break;
        case 3:
            r = (n1 * n2);
            printf("%.0f x %.0f = %.0f", n1, n2, r);
            break;
        case 4:
            if(n2 == 0){
                printf("Divisão indeterminada.");
            }else{
                r = (n1 / n2);
                printf("%.0f / %.0f = %.0f", n1, n2, r);
            }
            break;
    }
    return(0);
}