#include<stdio.h>
#include<math.h>
int main(){
    int shape;
    printf("enter  1: area of squre  2: area of rectangle    3: area of circle ");
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
    
    default:{
        printf("enter valid number");
    }
        break;
    }

    return 0;
}