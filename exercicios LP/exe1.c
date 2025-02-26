#include <stdio.h>

int main () {
    int nota;
    
    printf("Digite o nota do aluno: ");
    scanf("%d", &nota);
    
    if( nota >= 6 ){
        printf("Aprovado!");
    }
    
    if ( nota < 6 ) {
        printf("Reprovado!");
    }
    
    return 0;
}