#include<stdio.h>
void acendingArray()
{    
    int a[50] ,i,n,j,b;
	printf("\nEnter  the count = \n");
	scanf("%d",&n);
 printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

   
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }

    }
}
 printf("\n the Array in acending order is :\n" );
       for(i=1;i<=n;i++)
    printf("%d\t",a[i]);
 
}
int main()
{
	acendingArray();	
     return 0;
}

/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc acendingarray.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 enter the number count in array = 10

Enter the numbers =
90
88
44
66
55
99
45
87
12
89

 the Array in acending order is :
12      44      45      55      66      87      88      89      90      99
*/
