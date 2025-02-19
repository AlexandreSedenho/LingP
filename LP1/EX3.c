#include <stdio.h>

int main(void) {
    float altura;
    float peso;
    
    printf("Digite sua altura: ");
    
    scanf("%f", &altura);
    
    printf("Digite seu peso: ");
    
    scanf("%f", &peso);
    
    float imc = peso / (altura*altura);
    
    printf("Seu IMC é: %f", imc);
}
