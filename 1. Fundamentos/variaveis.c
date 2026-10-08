#include <stdio.h>

int main()
{
    double d1, d2, d3;
    float f1, f2, f3;
    int i1, i2, i3;
    
    //SOMA##############
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &i1);
    printf("Digite o segudo numero inteiro: \n");
    scanf("%d", &i2);

    i3 = i1 + i2;

    printf("A soma de numeros inteiros e: %d\n\n", i3);

    //MULTIPLICACION############
    printf("Digite o primeiro numero real F: \n");
    scanf("%f", &f1);
    printf("Digite o segudo numero real F: \n");
    scanf("%f", &f2);

    f3 = f1 * f2;

    printf("A multiplicacao de numeros reais e: %.2f\n\n", f3);

    //DIVICION############
    printf("Digite o primeiro numero real D: \n");
    scanf("%lf", &d1);
    printf("Digite o segudo numero real D: \n");
    scanf("%lf", &d2);

    d3 = d1 / d2;

    printf("A divicao de numeros reais e: %.2f\n\n", d3);

    return 0;
}
