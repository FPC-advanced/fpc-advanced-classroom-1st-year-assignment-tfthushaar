#include<stdio.h>
#include<math.h>

typedef struct _triangle{
    float base, altitude, area;
} triangle;
int input_n(){
    int n;
    printf("number of triangles: \n");
    scanf("%d", &n);
    return n;
}
triangle input_triangle(){
    triangle t;
    printf("enter the base and altitudes of the triangle\n");
    scanf("%f %f", &t.base, &t.altitude);
    return t;
}
void input_n_triangles(int n, triangle t[n]){
for(int i=0; i<n; i++){
    t[i] = input_triangle();
}
}
void find_area(triangle *t){
    t->area = 0.5*t->base*t->altitude;
}
void find_n_areas(int n, triangle t[n]){
    t->area= 0.5*t->altitude*t->base;
}
triangle findsmallest_triangle(int n, triangle t[n]){
    triangle smallest = t[0];
    for(int i=1; i<n; i++){
        if(t[i].area < smallest.area){
            smallest = t[i];
        }
    }
    return smallest;
}
int main() {
    int n = input_n();
    triangle triangles[n];
    input_n_triangles(n, triangles);
    find_n_areas(n, triangles);

    printf("\nList of Triangles with Areas:\n");
    for (int i = 0; i < n; i++) {
        printf("Triangle %d - Base: %.2f, Altitude: %.2f, Area: %.2f\n", i + 1, triangles[i].base, triangles[i].altitude, triangles[i].area);
    }

    triangle smallest_triangle = findsmallest_triangle(n, triangles);
    printf("\nSmallest Triangle - Base: %.2f, Altitude: %.2f, Area: %.2f\n", smallest_triangle.base, smallest_triangle.altitude, smallest_triangle.area);

    return 0;
}
