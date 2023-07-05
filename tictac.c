#include <stdio.h>
#include <stdlib.h>
int main() {
  int size, i, j, turn, position, flag;
  char player;
  printf("Enter the size of the game: ");
  scanf("%d", &size);
  char **table = malloc(size * sizeof(char *));
  for (int i = 0; i < size; i++) {
    table[i] = malloc(size * sizeof(char));
  }
  int *filled = malloc(9 * sizeof(int));
  turn = 1;
   printf("---------------------------------------------------\n");
  for (int i = 0; i < size; i++) {

    for (int j = 0; j < size; j++) {
      if (table[i][j] == 'x' || table[i][j] == 'o') {
        printf("|\t%c\t|", table[i][j]);
      } else {
        printf("|\t%d\t|",i*size+j+1);
      }
    }
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
  }
  while (turn <= 9) {
    if (turn % 2 == 0) {
      player = 'o';
    } else {
      player = 'x';
    }
  ask:
    printf("Enter the box for player  %c :", player);
    scanf("%d", &position);
    for (i = 0; i < 9; i++) {
      if (filled[i] == position) {
        printf("This box is already filled.\n");
        goto ask;
      }
    }
    filled[turn - 1] = position;

    switch (position) {
    case (1): {
      table[0][0] = player;
      break;
    }
    case (2): {
      table[0][1] = player;
      break;
    }
    case (3): {
      table[0][2] = player;
      break;
    }
    case (4): {
      table[1][0] = player;
      break;
    }
    case (5): {
      table[1][1] = player;
      break;
    }
    case (6): {
      table[1][2] = player;
      break;
    }
    case (7): {
      table[2][0] = player;
      break;
    }
    case (8): {
      table[2][1] = player;
      break;
    }
    case (9): {
      table[2][2] = player;
      break;
    }
    default: {
      printf("Enter a vaild position");
      goto ask;
    }
    }
    // rows
    for (i = 0; i < size; i++) {
      flag = 0;
      for (j = 0; j < size; j++) {
        if (player == table[i][j]) {
          flag++;
        }
      }
      if (flag == size) {
        printf("Player %c wins\n", player);
        goto print;
      }
    }
    // columns
    for (i = 0; i < size; i++) {
      flag = 0;
      for (j = 0; j < size; j++) {
        if (player == table[j][i]) {
          flag++;
        }
      }
      if (flag == size) {
        printf("Player %c wins\n", player);
        goto print;
      }
    }
    // diagonals
    while (1) {
      flag = 0;
      for (i = 0; i < size; i++) {
        if (table[i][i] == player) {
          flag++;
        }
      }
      if (flag == 3) {

        printf("Player %c wins\n", player);
        flag = 0;
        goto print;
        break;
      } else {
        break;
      }
    }
    // diagonlas 2
    while (1) {
      flag = 0;
      for (i = 0; i < size; i++) {
        if (table[i][size - 1 - i] == player) {
          flag++;
        }
      }
      if (flag == 3) {
        printf("Player %c wins\n", player);
        flag = 0;
        goto print;
        break;
      } else {
        break;
      }
    }
    turn++;
     printf("---------------------------------------------------\n");
  for (int i = 0; i < size; i++) {

    for (int j = 0; j < size; j++) {
      if (table[i][j] == 'x' || table[i][j] == 'o') {
        printf("|\t%c\t|", table[i][j]);
      } else {
        printf("|\t%d\t|",i*size+j+1);
      }
    }
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
  }
  }
  printf("Match is drawn\n");

print:
  printf("---------------------------------------------------\n");
  for (int i = 0; i < size; i++) {

    for (int j = 0; j < size; j++) {
      if (table[i][j] == 'x' || table[i][j] == 'o') {
        printf("|\t%c\t|", table[i][j]);
      } else {
        printf("|\t%d\t|",i*size+j+1);
      }
    }
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("\n");
  }
  free(filled);
  free(table);
}