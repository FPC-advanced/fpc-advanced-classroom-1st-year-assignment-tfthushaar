#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int n;
    printf("enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int input_polygon(Polygon *poly) {
    poly->sides = input_n();
    printf("enter the coordinates for each point:\n");
    for (int i = 0; i < poly->sides; i++) {
        poly->p[i] = input_point("");
    }
    return poly->sides;
}

float find_distance(Point a, Point b) {
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

void find_perimeter(Polygon *poly) {
    float totalPerimeter = 0;
    for (int i = 0; i < poly->sides - 1; i++) {
        totalPerimeter += find_distance(poly->p[i], poly->p[i + 1]);
    }
    totalPerimeter += find_distance(poly->p[poly->sides - 1], poly->p[0]);
    poly->perimeter = totalPerimeter;
}

void output(Polygon poly) {
    printf("perimeter of the polygon: %.2f\n", poly.perimeter);
}

int main() {
    Polygon myPolygon;
    input_polygon(&myPolygon);
    find_perimeter(&myPolygon);
    output(myPolygon);
    return 0;
}


// Chatgpt prompts used 
//"void find_perimeter(Polygon *poly)" complete this code for me and explain how it works 