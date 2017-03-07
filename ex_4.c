#include <stdio.h>

void insertion_sort(int v[], int n) {
  int j;
  int temp;
  for (int i = 1; i < n; i++) {
    j=0;
    while (v[i-j-1] > v[i-j] && i-j-1>=0) {
      temp =v[i-j];
      v[i-j]=v[i-j-1];
      v[i-j-1]=temp;

      j+=1;
    }
  }
}

int main(int argc, char *argv[]) {

  int lista_test[] = {4,2,77,31,22,1,5,89,10,17};
  int n = sizeof(lista_test)/sizeof(int);

  insertion_sort(lista_test,n);

  for (int i=0; i<n; i++){
    printf("%d ", lista_test[i]);
  }
  return 0;
}
