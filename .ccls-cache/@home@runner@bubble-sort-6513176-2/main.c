
#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, j=0, new_number, *a, N,n;

  N = argc - 1;
  a = (int *)malloc(sizeof(int) * N);
  int *prime=(int *)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++) {

    a[i] = atoi(argv[i + 1]);
    if (isprime(a[i])==1){
      prime[j] = a[i];
    j++;}
  }
  N = j;
  if (N == 0)
    printf("No prime");
  display(prime, N);
  bubbleSort(prime, N);
  // insertion(a,N);

  // selectionSort(a,N);
  display(prime, N);
  return 0;
}
