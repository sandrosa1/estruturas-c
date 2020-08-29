#include <stdio.h>

int main(){
    int base;
    int altura;
    int area;

    printf("Digite o valor da base\n");
    scanf("%i",&base);
    printf("Digite a altura\n");
    scanf("%i",&altura);

    area = base * altura;
    printf ("A area do retangulo e = %imm\n",area);

    return 0;
        
}