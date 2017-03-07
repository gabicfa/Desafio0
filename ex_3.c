#include <stdio.h>

void selection_sort(int v[], int n) {
  int menor = v[0];
  int temp;
  int idx;

  for(int j = 0; j < n-1; j++) {
    menor = v[j];
    idx = j;
     for(int i = j; i < n; i++) {
       if(v[i] < menor) {
         menor = v[i];
         idx = i;
       }
     }
     temp = v[j];
     v[j] = menor;
     v[idx] = temp;
   }
}

int main(int argc, char *argv[]) {

  int lista_test[] = {4,2,77,31,22,1,5,89,10,17};
  int n = sizeof(lista_test)/sizeof(int);

  selection_sort(lista_test,n);

  for (int i=0; i<n; i++){
    printf("%d ", lista_test[i]);
  }

  return 0;
}
