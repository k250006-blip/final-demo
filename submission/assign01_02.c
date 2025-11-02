#include <stdio.h> 
int main() {
    float x,x1,x2,y,y1,y2;
    printf("Enter first set of x-coordinate(s) and y-coordinate(s): ");
    scanf("%f%f",&x,&y);
    printf("Enter second set of x-coordinate(s) and y-coordinate(s): ");
    scanf("%f%f",&x1,&y1);
    printf("Enter third set of x-coordinate(s) and y-coordinate(s): ");
    scanf("%f%f",&x2,&y2);
    if (x>0 && y>0)
    {
        printf("The point (%.0f, %.0f) lies in Quadrant I",x,y);
    }
    else if (x<0 && y>0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant II",x,y);
    }
    else if (x<0 && y<0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant III",x,y);
    }
    else if (x>0 && y<0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant IV",x,y);
    }
    else if (x==0 && y==0)
    {
        printf("\nThe point (%.0f, %.0f) is at the Origin",x,y);
    }
    if (x1>0 && y1>0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant I",x1,y1);
    }
    else if (x1<0 && y1>0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant II",x1,y1);
    }
    else if (x1<0 && y1<0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant III",x1,y1);
    }
    else if (x1>0 && y1<0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant IV",x1,y1);
    }
    else if (x1==0 && y1==0)
    {
        printf("\nThe point (%.0f, %.0f) is at the Origin",x1,y1);  
    }
    if (x2>0 && y2>0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant I",x2,y2);
    }
    else if (x2<0 && y2>0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant II",x2,y2);
    }
    else if (x2<0 && y2<0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant III",x2,y2);
    }
    else if (x2>0 && y2<0)
    {
        printf("\nThe point (%.0f, %.0f) lies in Quadrant IV",x2,y2);
    }
    else if (x2==0 && y2==0)
    {
        printf("\nThe point (%.0f, %.0f) is at the Origin",x2,y2);
    }
    return 0;
}