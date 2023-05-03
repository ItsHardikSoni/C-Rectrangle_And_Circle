// The length and breadth of a rectangle and radius of a circle are input through the keyboard. 
// Write a program to calculate the area and perimeter of the rectangle, 
// and the area and circumference of the circle.



#include<stdio.h>
#include<conio.h>
int main()
{
    float ar, arc, per, cir, l, b, r;
    printf ("\n Enter l, b, r \n" );
    scanf ("%f %f %f", &l, &b, &r);
    /* Formula of Area & Perimeter(Rectangle), Area & Circumference (Cricle)*/
    ar = l*b;
    per = 2*(l+b);
    arc = 22*r*r;
    cir = 2*22*r/7;
    printf (" Area of Rectrangle = %f\n", ar);
    printf (" Perimeter of Rectangle = %f\n", per);
    printf (" Area of Circle = %f\n", arc);
    printf (" Circumference of Circle = %f\n", cir);
    return 0;
}
