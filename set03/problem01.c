#include<stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2){
    printf("Enter coordinates (x1 y1 x2 y2): ");
    scanf("%f %f %f %f", x1, y1, x2, y2);
    }

float find_distance(float x1, float y1, float x2, float y2)
{
    float dis;
    dis= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dis;
}
void output(float x1, float y1, float x2, float y2, float distance){
    printf("\nDistance between points(%f,%f) and (%f,%f)= %.3f\n", x1, y1, x2, y2, distance);
}

int main()
{
    
    float x1,x2,y1,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}