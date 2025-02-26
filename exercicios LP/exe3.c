#include <stdio.h>

int main(void) {
  int nota;

  printf("Digite uma nota [0-10]: ");
  scanf("%d", &nota);
  
  if( nota >= 9 ) {
      printf("Conceito: A");
      return 0;
  }
  
  if( nota >= 8 ) {
      printf("Conceito: B");
      return 0;
  }
  
  if( nota >= 7 ) {
      printf("Conceito: C");
      return 0;
  }
  
  if( nota >= 6 ) {
      printf("Conceito: D");
      return 0;
  }
  
  if( nota >= 0 ) {
      printf("Conceito: F");
      return 0;
  }

  return 0;
}