#include<stdio.h>

typedef struct points
{
    int x;
    int y;
}point_t;

typedef struct rectangle
{
    point_t upper_left;
    point_t lower_right;

}rect_t;

int area(rect_t r)
{
    int length, breadth;
    length = r.lower_right.x - r.upper_left.x;
    breadth = r.upper_left.y - r.lower_right.y;
    return length*breadth;
}

int main(){
    rect_t r;
    printf("Enter the values of upper left coordinates :");
    scanf("%d %d",&r.upper_left.x, &r.upper_left.y);
    printf("Enter the values of lower right coordinates :");
    scanf("%d %d",&r.lower_right.x, &r.lower_right.y);
    printf("Area of rectangle: %d ",area(r));
    return 0;
}