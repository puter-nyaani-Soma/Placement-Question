#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int i, j, k, l;
  char *a;
  char *b = NULL;
  ssize_t d;
  size_t len_b;

  a = (char *)malloc(100 * sizeof(char));
  b = (char *)malloc(100 * sizeof(char));

  printf("Enter the strings\n");
  printf("* Document :\t");
  fgets(a, 100, stdin);
  printf("* String :\t");
  fgets(b, 100, stdin);
  a[strlen(a) - 1] = '\0';
  a = realloc(a, (strlen(a)) * sizeof(char));
  b[strlen(b) - 1] = '\0';
  b = realloc(b, (strlen(b)) * sizeof(char));
  printf("\n|\t|\tDocument \t|\tString\t\t|\n");
  printf("|size\t|\t %d \t\t|\t %d\t\t|\n", strlen(a), strlen(b));
  printf("|words\t|\t %s \t\t|\t %s\t\t|\n", a, b);
  if (strlen(a) != strlen(b)) {
    printf("\n-\t-\t-\tNot possible\t-\t-\t-\t");
  } else {
    for (i = 0; i < strlen(a); i++) {
      printf("|%d\t|\t%c\t\t|\t%s\t\t|\n",strlen(a), a[i],b);
        
        l=0;
      for (j = 0; j < strlen(b); j++) {
        if (a[i] == b[j]) {
          //printf("\t-\t-\tFound at %d\t-\t-\t-\tSwapping\n", j + 1);
          for (k = i; k < strlen(a); k++) {
            a[k] = a[k + 1];
          }
          for (k = j; k < strlen(b); k++) {
            b[k] = b[k + 1];
          }

            i--;
            l=1;
          
        }
      }
      if(l==0){
             printf("\n-\t-\t-\tNot possible\t-\t-\t-\t");
             free(a);
             free(b);
             return 0;
        }
    }
   
  }
  printf("\n-\t-\t-\tPossible\t-\t-\t-\t");
  free(a);
  free(b);
  return 0;
}