# include<stdio.h>
# include<math.h>

int main(void)
{
    float a = 10, b = 100, c;
    a = pow(a,2);
    b = sqrt(b);
    c = cbrt((a*b));
    printf("a = %f,\nb = %f,\nc = %f.", a,b,c);
    return 0;
}