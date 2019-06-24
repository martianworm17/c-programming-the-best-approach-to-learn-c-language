#include<stdio.h>
#include<ncurses.h>
#include<string.h>

float start_point;
float end_point;
float total_area;

int numtraps;

void main () {

    void input(void);
    float find_area(float a, float b, int n);

    printf("AREA UNDER THE CURVE");

    input();
    total_area = find_area(start_point, end_point, numtraps);

    printf("The total area is %f", total_area);
}

void input(void) {
    printf("Enter the lower limit");
    scanf("%f", & start_point);

    printf("Enter the upper limit");
    scanf("%f", & end_point);

    printf("Enter the number of trapezoids");
    scanf("%d", & numtraps);
}