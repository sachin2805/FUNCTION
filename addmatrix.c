#include<stdio.h>
void addition()
{
	   int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("\nEnter the first matrix = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             scanf("%d",&a[i][j]);
    }
      printf("\nEnter the Second matrix = \n");
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             scanf("%d",&b[i][j]);
    }

      printf("\n the first matrix =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             printf("%d ",a[i][j]);
             printf("\n");

    }
      printf("\n the Second matrix =\n");
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             printf("%d ",b[i][j]);
             printf("\n");
    }
        printf("\n the Addition of the matrix =\n ");
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]= a[i][j] + b[i][j];
             printf("%d   ",c[i][j]);
            
        }
         printf("\n");
    }
 }
int main()
{
  addition();
    return 0;
}

/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc addmatrix.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe        

Enter the first matrix = 
1
2
3
4
5
6
7
8
9

Enter the Second matrix = 
1
2
3
4
5
6
7
8
9

 the first matrix =
1 2 3
4 5 6
7 8 9

 the Second matrix =
1 2 3
4 5 6
7 8 9

 the Addition of the matrix =
 2   4   6   
8   10   12
14   16   18
PS F:\PROFOUND\PRACTICAL\c>
*/
