#include<stdio.h>
void duplicate()
{
    int a[50] ,i,n,j,count=0;
    printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

    printf("duplicate elements are = ");
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]==a[j])
        {
          printf("%d\t",a[j]);
          count++;
          break;
        }
    }
}
printf("\nduplicate numbers count is = %d\n",count);
}
int main()
{
  duplicate();
return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\ARRAY> gcc duplicate.c
PS F:\PROFOUND\PRACTICAL\c\ARRAY> ./a.exe        

 enter the number count in array = 5

Enter the numbers =
10
10
20
20
30
duplicate elements are = 10     20
duplicate numbers count is = 2
PS F:\PROFOUND\PRACTICAL\c\ARRAY>
*/
   