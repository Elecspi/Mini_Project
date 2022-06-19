#include<stdio.h>
#include<stdlib.h>
struct matrix{
  int rows;
  int columns;
};
int main()
{
int a[10][10],b[10][10],mul[10][10],add[10][10],sub[10][10],i,j,k,choice;
  struct matrix x;
  printf("Enter number of rows :"};
  scanf("%d",&x.rows);
  printf("Enter number of columns :");
  scanf("%d",&x.columns);
  printf("Enter firt matrix rows by leaving a space\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
  printf("Enter second matrix rows by leaving a space\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
          scanf("%d",&b[i][j];
      }
    }
  printf("Enter the operation to be performed on matrix. \n");
  printf("Enter 1 for addition, 2 for subtraction");
  scanf("%d",&choice);
  if (choice == 1)
  {
    printf("Sum of the Matrices\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        add[i][j] =;
        add[i][j] = a[i][j]+b[i][j];
      }
    }
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d\t",add[i][j];
      }
      printf("\n");
    }
  }
  else if(choice==2)
  {
    printf("Difference of the Matrices\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        sub[i][j]=0;
        sub[i][j]=a[i][j]-b[i][j];
      }
    }
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d\t",sub[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}
