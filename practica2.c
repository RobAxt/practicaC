/* Ordenar alfabéticamente una lista de cadena de caracteres,
utilizando un vector bidimensional*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reordenar(int n, char cadenas[][12]) {
  char temp[12];
  for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(strcmp(cadenas[j], cadenas[j + 1]) > 0) {
        // Intercambiar las cadenas
        strcpy(temp, cadenas[j]);
        strcpy(cadenas[j], cadenas[j + 1]);
        strcpy(cadenas[j + 1], temp);
      }
    }
  }
}

int main() {
  int i, n = 0;
  char cadenas[10][12];

  printf("Introducir debajo cada Cadena en una línea\n\n");
  printf("Escribir \"FIN\" para terminar\n\n");
  
  /*leer la lista de caracteres*/
  do {
    printf("cadena %d: ", n+1);
    scanf("%s",cadenas[n]);
  } while(strcmp(cadenas[n++],"FIN"));
  
  /* ajustar el valor de n */
  n--;
  
  /* reordenar la lista de cadena de caracteres */
  reordenar(n, cadenas);
  
  /* escribir la lista reordenada de cadenas de caracteres */
  printf("\r\n\r\nLista reordenada de cadenas:\r\n");

  for(i = 0; i < n; ++i) {
    printf("\r\ncadena %d: %s", i+1, cadenas[i]);
  }
  printf("\r\n");
  
  return 0;
}
