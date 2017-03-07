#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void aleatorio(int v[], int n) {
  int j;
  srand(time(NULL));

  for(int i=0; i<n;i++){
    j = rand() % MAX_NUMBER;
    v[i]=j;
  }
}

int main(int argc, char *argv[]) {
  int n = 8;
  int lista_test[n];

  aleatorio(lista_test, n);

  for (int i=0; i<n; i++){
    printf("%d ", lista_test[i]);
  }
  return 0;
}
