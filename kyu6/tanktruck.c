#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

int tankVol(int h, int d, int vt) {
    double r = d/2.0;
    double x = 2*sqrt((2*r*h)-pow(h,2));
    double epsilon = 2*acos(1-(h/r));
    double as = (epsilon/2)*pow(r,2);
    double at = (x*(r-h))/2;
    double a = as-at;
    double l = vt/(M_PI*pow(r,2));
    double v = a*l;

    return v;
}

int main() {
    int h = 40;
    int d = 120;
    int vt = 3500;

    int result = tankVol(h,d,vt);
    printf("The result is %d", result);

    return 0;
}

/*    double r = d/2.0;
    printf("r: %f\n",r);
    double x = 2*sqrt((2*r*h)-pow(h,2));
    printf("x: %f\n",x);
    double epsilon = 2*acos(1-(h/r));
    printf("eps: %f\n",epsilon);
    double as = (epsilon/2)*pow(r,2);
    printf("as: %f\n",as);
    double at = (x*(r-h))/2;
    printf("at: %f\n",at);
    double a = as-at;
    printf("a: %f\n",a);
    double l = vt/(M_PI*pow(r,2));
    printf("l: %f\n",l);
    double v = a*l;*/