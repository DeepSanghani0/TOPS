//Write a program of to find out the Area of Triangle, Rectangle and Circleusing Switch Case .(Must Be Menu Driven) 
#include<stdio.h>
#include<math.h>
int main()
{
    int shape;
    printf("enter  1: area of squre \n");
    printf("2: area of rectangle \n");    
    printf("3: area of circle \n"); 
    printf("4: area of trinagle \n");
    scanf("%d",&shape);
    switch (shape)
    {
    case 1:{ //square
        int l,area;
        printf("enter the length of squre: ");
        scanf("%d",&l);
        area = l*l;
        printf("area of square is %d",area);
        break;
    }
    case 2:{ //rectangle
        int l,w,area;
        printf("enter the length and width of ractangle: ");
        scanf("%d %d",&l,&w);
        area = l*w;
        printf("area of reactangle is %d",area);
        break;
    }
    case 3:{//circle
        float r,pi,area;
        pi=3.14;
        printf("enter the value of radius: ");
        scanf("%f",&r);
        area= 2*pi*r;
        printf("area of circler is %f",area);
    }
    case 4:{
        float a,b,c,s,area;
        printf("enter the sides of a: ");
        scanf("%f",&a);
        printf("enter the sides of b: ");
        scanf("%f",&b);
        printf("enter the sides of c: ");
        scanf("%f",&c);
        s=((a+b+c)/2);
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area of triangle is %f",area);
    }
    
    default:{
        printf("enter valid number");
    }
        break;
    }

    return 0;
}