#include <stdio.h>

int crescente(int v[], int n) {
  int r = 1;

  for (int i = 1; i < n; i++){
    if(v[i-1]<v[i]){
      r = r* 1;
    }
    else{
      r= r *0;
      break;
    }
  }
  return r;
}

void bubble_sort(int v[], int n) {
  int check;
  for(int j = n - 1; j >= 1; j--) {
    if (crescente(v,n)){
      break;
    }
    for(int i = 1; i <= j; i++) {
      if(v[i - 1] > v[i]) {
        int temp = v[i - 1];
        v[i - 1] = v[i];
        v[i] = temp;
      }
    }
  }
}

int main(int argc, char *argv[]) {

  int lista_test[] = {4,2,77,31,22,1,5,89,10,17};
  int n = sizeof(lista_test)/sizeof(int);

  bubble_sort(lista_test,n);

  for (int i=0; i<n; i++){
    printf("%d ", lista_test[i]);
  }

  return 0;
}
