#include<stdio.h>
void input(float *base, float *height)
{
printf("enter the base value of triangle\n");
scanf("%f",&*base);
printf("enter teh height value of the triangle\n");
scanf("%f",&*height);
}
void find_area(float base , float height, float *area)
{
    *area=0.5*base*height;
}
void output(float base, float height, float area)
{
    printf("the base is %f\n",base );
    printf("the height is %f\n", height);
    printf("the area is %f\n", area);
}
int main(){
    float base, height, area;
    input(&base, &height);
    find_area(base, height, &area);
    output (base, height, area);
    return 0;
}