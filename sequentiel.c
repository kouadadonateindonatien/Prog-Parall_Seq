//somme de deux matrices
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
long b = CLOCKS_PER_SEC;
clocks_t_start, end;
int main()
{
    int matx1[10][10], matx2[10][10], matx3[10][10];
  int i,j,row,col;

  printf("Combien de lignes et de colonnes?\n");
  scanf("%d%d",&row,&col);

  printf("\nEntrez la première matrice:\n");
clocks_t_start = clock();
   for(i=0; i < row; ++i)
    for(j = 0; j < col; ++j)
      scanf("%d",&matx1[i][j]);

  printf("\nEntrez la deuxième matrice:\n");
  for(i = 0; i < row; ++i)
    for(j = 0; j < col; ++j)
      scanf("%d",&matx2[i][j]);
  printf("\nMatrice après l'addition:\n");
  for(i = 0; i < row; ++i)
  {
    for(j=0; j < col; ++j)
    {
      matx3[i][j] = matx1[i][j] + matx2[i][j];
      printf("%d ",matx3[i][j]);
  end = clock();
  printf("temps d'execution :%lf\n",(end-clocks_t_start)/(double )b );

    }
    printf("\n");
  }

  return 0;
}
//fait par  kouada donatien donatien
