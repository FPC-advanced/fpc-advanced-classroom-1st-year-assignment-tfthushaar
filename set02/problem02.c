#include<stdio.h>
int input_side(float *s1, float *s2, float *s3)
{
    printf("enter the three sides\n");
    scanf("%f", &*s1);
    scanf("%f", &*s2);
    scanf("%f", &*s3);
}
int process(float s1, float s2, float s3)
{
    int isscalene=0;
if(s1==s2 && s2==s3){
printf("\nthe triangle is not a scalene triangle");
}
else if(s1==s2||s2==s3||s1==s3){printf("\nthe triangle is not a scalene triangle");}
else{printf("\nthe triangle is a scalene triangle"); isscalene=1;}
return isscalene;
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene){printf("the sides are %f %f %f", a, b, c);}
}
int main()
{
float s1, s2, s3; int a, b, c, isscalene;
input_side(&s1, &s2, &s3);
a=s1; b=s2; c=s3;
isscalene = process(s1, s2, s3);
output(a, b, c, isscalene);
return 0;
}