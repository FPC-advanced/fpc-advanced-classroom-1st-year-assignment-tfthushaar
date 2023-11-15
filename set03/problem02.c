#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the coordinates of point 1: ");
    scanf("%f %f", x1, y1);
    printf("\n");
    printf("Enter the coordinates of point 2: ");
    scanf("%f %f", x2, y2);
    printf("\n");
    printf("Enter the coordinates of point 3: ");
    scanf("%f %f", x3, y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
    if (((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) == 0) && 
        ((x1 * x2 + x2 * x3 + x3 * x1) - (y1 * x2 + y2 * x3 + y3 * x1) == 0)) {
        return 1;
    } else {
        return 0;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result == 1) {
    printf("The points form a triangle.\n\n");
    } else {
    printf("The points do not form a triangle.\n\n");
 }
}

int main()
{
    float x1, y1, x2, y2, x3, y3;
    int result;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}