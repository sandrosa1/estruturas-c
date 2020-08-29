#include <stdio.h>

int main(){

    //
    int myAge = 44;
    int myMother = 68;
    int myDad = 77;
    int myBrother = 38;

    int total;

    total = myAge * myDad / myMother + myBrother;

    // %i -> indica onde vai ficar a variavel que está após a virgula
    printf ("Total %i\n", total );



    return 0;

}