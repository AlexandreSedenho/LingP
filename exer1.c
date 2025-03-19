/*recebe 3 notas, calcula e exibe a média das notas*/
#include <stdio.h>

int main(void) {
    int contador = 1;
    int fim = 3;
    
    float total;
    float nota;
    
    while( contador <= fim ) {
        printf("Digite a nota %d: ", contador);
        scanf("%f", &nota);
        
        total += nota;
        
        contador = contador + 1;
    }
    
    float media = total / fim;
    
    printf("Média: %.2f", media);
    
    return 0;
}