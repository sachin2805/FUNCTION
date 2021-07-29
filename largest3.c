#include<stdio.h>
void largest()
{
          int n1,n2,n3;
    printf("\n Enter the three number = ");
    scanf("%d%d%d",&n1,&n2,&n3);

    if(n1==n2 && n2==n3)
            {
                  printf("\n%d,%d,%d are equal and %d is largest number ",n1,n2,n3,n3);
            }
    else if(n1>n2 && n1>n3)
            {
                  printf("\n%d,%d,%d are not equal and %d is largest number ",n1,n2,n3,n1);
            }
    else if(n2>n3)
          {
                  printf("\n%d,%d,%d are not equal and %d is largest number ",n1,n2,n3,n2);
            }
            else 
            {
                  printf("\n%d,%d,%d are not equal and %d is largest number ",n1,n2,n3,n3);
            }
}
int main()
{
      largest();
    return 0;
}
//OR

/* #include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("\n Enter the three number = ");
    scanf("%d%d%d",&n1,&n2,&n3);

     if(n1!=n2  || n2!=n3)
    {   
    printf("\n %d,%d,%d are not equal",n1,n2,n3);
             if(n1<n2 && n2<n3)
            {
                  printf("\n %d is largest number ",n3);
            }
            else if(n1>n2 && n2>n3)
                 {
                     printf("\n %d is largest number ",n1);
                 }
                else if(n1<n2 && n2>n3)
                    {
                      printf("\n %d is largest number ",n2);
                    }
                    else if(n1==n2  && n2<n3)
                        {
                             printf("\n%d is largest number",n3);
                        }
                             else if(n1==n2  && n2>n3)
                                 {
                                    printf("\n%d is largest number",n2);
                                 }

                                  else if(n1<n2  && n2==n3)
                        {

                    
                              printf("\n%d is largest number",n3);
                        }
                    
                    else if(n1>n2  && n2==n3)
                                 {
                                    printf("\n%d is largest number",n1);
                                 }

    }
     if(n1==n2 && n2==n3)
    {
        printf("\n %d,%d,%d are equal ",n1,n2,n3);
         printf("\n %d is largest number ",n1);
    }
    return 0;
}
*/