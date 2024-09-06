// Daniel Adichirayil
// COP3223C
// 09/05/2024

// Header file for input output functions
#include <stdio.h>
#include <math.h>
 
double calculateDistance()
{
    int x1;
    int x2;
    int y1;
    int y2;

    printf("Enter x1: \t");
    scanf("%d",&x1);

    printf("Enter x2: \t");
    scanf("%d",&x2);

    printf("Enter y1: \t");
    scanf("%d",&y1);

    printf("Enter y2: \t");
    scanf("%d",&y2);

    // Formula for the distance.
    int distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    printf("Point #1 entered: (%d, %d)", x1, y1);
    printf("\nPoint #2 entered: (%d, %d)", x2, y2);
    printf("\nThe distance between the two points is: %d", distance);
    return distance;

}

double calculatePerimeter()
{
    int x1;
    int x2;
    int y1;
    int y2;

    printf("\nEnter x1: \t");
    scanf("%d",&x1);

    printf("Enter x2: \t");
    scanf("%d",&x2);

    printf("Enter y1: \t");
    scanf("%d",&y1);

    printf("Enter y2: \t");
    scanf("%d",&y2);
    
    // Formula for the perimeter.
    int perimeter = ((2*(x2-x1))+(2*(y2-y1)));
    
    printf("Point #1 entered: (%d, %d)", x1, y1);
    printf("\nPoint #2 entered: (%d, %d)", x2, y2);
    printf("\nThe permiter of the city encompassed by your request is: %d", perimeter);
    return perimeter;
}

double calculateArea()
{
    int x1;
    int x2;
    int y1;
    int y2;

    printf("\nEnter x1: \t");
    scanf("%d",&x1);

    printf("Enter x2: \t");
    scanf("%d",&x2);

    printf("Enter y1: \t");
    scanf("%d",&y1);

    printf("Enter y2: \t");
    scanf("%d",&y2);
    
    // Formula for the area.
    int area = ((x2-x1)*(y2-y1));
    
    printf("Point #1 entered: (%d, %d)", x1, y1);
    printf("\nPoint #2 entered: (%d, %d)", x2, y2);
    printf("\nThe area of the city encompassed by your request is: %d", area);
    return area;
}

double calculateWidth()
{
    int x1;
    int x2;
    int y1;
    int y2;

    printf("\nEnter x1: \t");
    scanf("%d",&x1);

    printf("Enter x2: \t");
    scanf("%d",&x2);

    printf("Enter y1: \t");
    scanf("%d",&y1);

    printf("Enter y2: \t");
    scanf("%d",&y2);
    
    // Formula for the width.
    int width = (x2-x1);
    
    printf("Point #1 entered: (%d, %d)", x1, y1);
    printf("\nPoint #2 entered: (%d, %d)", x2, y2);
    printf("\nThe width of the city encompassed by your request is: %d", width);
    return width;
}

double calculateHeight()
{
    int x1;
    int x2;
    int y1;
    int y2;

    printf("\nEnter x1: \t");
    scanf("%d",&x1);

    printf("Enter x2: \t");
    scanf("%d",&x2);

    printf("Enter y1: \t");
    scanf("%d",&y1);

    printf("Enter y2: \t");
    scanf("%d",&y2);
    
    // Formula for height.
    int height = (y2-y1);

    printf("Point #1 entered: (%d, %d)", x1, y1);
    printf("\nPoint #2 entered: (%d, %d)", x2, y2);
    printf("\nThe height of the city encompassed by your request is: %d", height);
    return height;
}

int main(int argc, char** argv)
{
    // Call everything.
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

