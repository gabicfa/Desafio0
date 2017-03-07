#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 1000
#define NUM_VETORES 100

void aleatorio(int v[], int n) {
  int j;
  srand(time(NULL));

  for(int i=0; i<n;i++){
    j = rand() % MAX_NUMBER;
    v[i]=j;
  }
}
int crescente(int v[], int n) {
  int r = 1;

  for (int i = 1; i < n; i++){
    if(v[i-1]<=v[i]){
      r = r* 1;
    }
    else{
      r= r *0;
      break;
    }
  }
  return r;
}

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

void bubble_sort(int v[], int n) {
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

  int vec[MAX_NUMBER];

  int lista_testB[MAX_NUMBER];
  int lista_testI[MAX_NUMBER];
  int lista_testS[MAX_NUMBER];

  int b;
  int i;
  int s;

  for (int k = 1; k <= NUM_VETORES; k++) {

      aleatorio(vec, MAX_NUMBER);

      for(int j = 0; j<MAX_NUMBER; j++){
        vec[j] = lista_testB[j];
        vec[j] = lista_testI[j];
        vec[j] = lista_testS[j];
      }

      bubble_sort(lista_testB, MAX_NUMBER);
      insertion_sort(lista_testI, MAX_NUMBER);
      selection_sort(lista_testS, MAX_NUMBER);

      b = crescente(lista_testB,MAX_NUMBER);
      i = crescente(lista_testI,MAX_NUMBER);
      s = crescente(lista_testS,MAX_NUMBER);

      printf("%d- ", k);
      printf("b: %d ", b);
      printf("i: %d ", i);
      printf("s: %d \n", s);
  }


  return 0;
}
