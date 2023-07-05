#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 3,temp;
  int **matrix = malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++) {
    matrix[i] = malloc(n * sizeof(int));
  }
  for (int i = 0; i < n; i++) {
    for (int j=0; j<n; j++) {
      scanf("%d", &matrix[i][j]);
      }
  }
  for (int i = 0; i < n; i++) {
    for (int j=0; j<i; j++ ){
        
        temp=matrix[n-i-1][j];
       matrix[n-i-1][j] =matrix[i][j];
       matrix[i][j] = temp;

  }}
  for (int i = 0; i < n; i++) {
    for (int j=0; j<n; j++) {

      printf("%d ", matrix[i][j]);
      }
      printf("\n");
  }
  

free(matrix);
}