#include<stdio.h>
#include<math.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle(){
    Triangle t;
	printf("enter the length of the base: ");
	scanf("%f", &t.base);
    printf("enter the length of the altitude: ");
	scanf("%f", &t.altitude);
    return t;
}
void find_area(Triangle *t){
    t->area = 0.5*t->base*t->altitude;
    }

void output(Triangle t){
 printf("the area of the triangle is %f", t.area);
}

int main()
{
    Triangle t;
    int a,b,ar;
    t=input_triangle(a,b);
    find_area(&t);
    output(t);
    return 0;
}