/*
Write a C program, which adds up columns and rows of given table as shown in the following figure.
*/
#include <stdio.h>
int main()
{
  int cell_data[11][11];
  int i, j, n, sum_val;
    printf("Input number of rows/columns:\n"); 
    scanf("%d", &n);
    printf("Input the cell value\n"); 
    if(n>0)
    {	
    for(i=0;i<n;i++){
    	printf("\nRow %d input cell values\n",i);
      for(j=0;j<n;j++){
	scanf("%d", &cell_data[i][j]);
      }
    }
    printf("\nResult:\n");
    for(i=0;i<n;i++){
      sum_val=0;
      for(j=0;j<n;j++){
	sum_val+=cell_data[j][i];
      }
      cell_data[n][i]=sum_val;
    }
    

    for(i=0;i<n;i++){
      sum_val=0;
      for(j=0;j<n;j++){
	sum_val+=cell_data[i][j];
      }
      cell_data[i][n]=sum_val;
    }

    sum_val=0;
    for(i=0;i<n;i++){
      sum_val+=cell_data[n][i];
    }
    cell_data[n][n]=sum_val;

    for(i=0;i<n+1;i++){
      for(j=0;j<n+1;j++){
       	printf("%5d", cell_data[i][j]);
      }
      printf("\n");
    }
}
  return 0;
}