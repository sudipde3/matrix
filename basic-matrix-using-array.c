#include <stdio.h>

int main() {
  int i, j, m, n;

  printf("Enter number of rows : ");
  scanf("%d", &m);
  printf("Enter number of columns : ");
  scanf("%d", &n);

  int mat[m][n];
  // Input data in matrix
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("Enter data in [%d][%d]: ", i+1, j+1);
      scanf("%d", &mat[i][j]);
    }
  }

  // Printing the results
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}