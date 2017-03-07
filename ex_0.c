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



int main(int argc, char *argv[]) {
  int lista_test1[] = {23,42,4,16,8,15};
  int lista_test2[] = {4,8,15,16,23,42};


  int r1 = crescente(lista_test1, 6);
  int r2 = crescente(lista_test2, 6);

  printf("%d\n", r1);
  printf("%d\n", r2);

  return 0;
}
