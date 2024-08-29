# include<stdio.h>
int main(void)
{
    int s,lr,wr;
    float r,ht,bt;
    //Area of Square
    printf("Enter side of Square:\n");
    scanf("%d", &s);
    printf("Area of Square is: %d\n", s*s);

    //Area of Rectangle
    printf("Enter length of Rectangle:\n");
    scanf("%d", &lr);
    printf("Enter width of Rectangle:\n");
    scanf("%d", &wr);
    printf("Area of Rectangle is: %d\n", lr*wr);

    //Area of Circle
    printf("Enter radius of Circle:\n");
    scanf("%f", &r);
    printf("Area of Circle is: %f\n", 3.141*r*r);

    //Area of Tringle
    printf("Enter height of Triangle:\n");
    scanf("%f", &ht);
    printf("Enter base of Triangle:\n");
    scanf("%f", &bt);
    printf("Area of Triangle is: %f\n", 0.5*bt*ht);

    return 0;
}