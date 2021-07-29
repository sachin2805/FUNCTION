#include<stdio.h>

void addition()
{
     printf("\n\n\n1.Addition"); 
      float a,b,x;
    printf("\nEnter any two number = ");
    scanf("%f%f",&a,&b);
    x=a+b;
        printf("the addition of given %f and %f is %f",a,b,x);
}
void substraction()
{
    printf("\n2.Substraction"); 
      float a,b,x;
    printf("\nEnter any two number = ");
    scanf("%f%f",&a,&b);
    x=a-b;
        printf("the addition of given %f and %f is %f",a,b,x);
}
void multiplication()
{
    printf("\n3.Multiplication"); 
      float a,b,x;
    printf("\nEnter any two number = ");
    scanf("%f%f",&a,&b);
     x=a*b;
        printf("the addition of given %f and %f is %f",a,b,x);
}
void division()
{
    printf("\n4.Division"); 
      float a,b,x;
    printf("\nEnter any two number = ");
    scanf("%f%f",&a,&b);
    x=a/b;
        printf("the addition of given %f and %f is %f",a,b,x);
}
int main()
{
    int e;
    printf("\n-------Menu------\n");
    printf("\n1.Addition \n2.Substrction \n3.Division \n4.Multiplication");

    addition(10,20);
    substraction();
    division();
    multiplication();
    printf("\nU want to Exit press 1 other wise 0 = ");
    scanf("%d",&e);
    if(e==0)
    {
        main();
    }
    return 0;
}