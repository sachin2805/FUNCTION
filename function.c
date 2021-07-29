#include<stdio.h>
//Function without parameters without return value.
double volumeOfCylinder()
{
   double r,h,volume;
    printf("\nEnter the redius of the cylinder = ");
    scanf("%lf",&r);
    printf("\nEnter the height of the cylinder = ");
    scanf("%lf",&h);
    volume=3.14*r*r*h;
    printf("\nThe volume of cylinder is = %lf",volume);
}
//Function with parameter without return value.
double volumeOfCylinder1(int r,int h)
{
    double volume;
   
    volume=3.14*r*r*h;
    printf("\nThe volume of cylinder is = %lf",volume);
}
//Function without parameter with return value.
double volumeOfCylinder2()
{
    double r,h,volume;
    printf("\nEnter the redius of the cylinder = ");
    scanf("%lf",&r);
    printf("\nEnter the height of the cylinder = ");
    scanf("%lf",&h);
    volume=3.14*r*r*h;
    return volume;
}
//Function with parameters with return value.
double volumeOfCylinder3(int r,int h)
{
    double volume;
   
    volume=3.14*r*r*h;
    
    return volume;
}
int main()
{
    float v;
    volumeOfCylinder();
    volumeOfCylinder1(10,20);
     v=volumeOfCylinder2();
     printf("\nThe volume of cylinder is = \t%lf ",v);
      v=volumeOfCylinder3(10,20);
        printf("\nThe volume of cylinder is = \t%lf ",v);
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc function.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe       

Enter the redius of the cylinder = 20

Enter the height of the cylinder = 30

The volume of cylinder is = 37680.000000
The volume of cylinder is = 6280.000000
Enter the redius of the cylinder = 20

Enter the height of the cylinder = 30

The volume of cylinder is =     37680.000000
The volume of cylinder is =     6280.000000
PS F:\PROFOUND\PRACTICAL\c>
*/