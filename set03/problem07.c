#include<stdio.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point(){
    printf("enter the points(x1 y1 x2 y2): ");
    Point p;
    scanf("%f %f", &p.x, &p.y);
    return p;
    }
Line input_line(){
    Line l;
    printf("Enter the starting point of the line:\n");
    l.p1 = input_point();
    printf("Enter the ending point of the line:\n");
    l.p2 = input_point();
    return l;
}
void find_length(Line *l){
    l->distance = sqrt(pow(l->p2.x - l->p1.x, 2) + pow(l->p2.y - l->p1.y, 2));
}
void output(Line l){
    printf("points (%.2f, %.2f) and (%.2f, %.2f) have a length of %.2f\n", l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}
int main() {
    Line line = input_line();
    find_length(&line);
    output(line);
    return 0;
}

        