#include <stdio.h>

// Fatorial de um numero exemplo 5
//5x4x3x2x1=120

int fatorial(int numero){
    
    if(numero ==1){
        return 1;
    }else
    {
        numero *= fatorial(numero -1);

        return numero;
    }
    

}

//Com for
int comFor(int numero)
{
    
    int resposta = 1;

    for(  ;numero >= 1; --numero){
        resposta *= numero;

    }
    return resposta;

}

int comWhile(int numero){
    int fat =1;
    while (numero >= 1)
    {
        fat *= numero;
        --numero;
    }

    return fat;
}

 
    
    


int main(){

    int fat= 1;
    int numero ;

    printf("Digite o valor para saber seu fatorial\n");
    scanf("%i",&numero);



    int teste1 = fatorial(numero);
    printf("Teste recursivo = %i\n", teste1);

    int teste2 = comFor(numero);
    printf("Teste 2 com for = %i\n",teste2);

    int teste3 = comWhile(numero);
    printf("Teste 3 while = %i\n", teste3);

    return 0;
}




