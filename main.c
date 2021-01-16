#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

double degToRad(double angleInDegrees) {
    return angleInDegrees * (M_PI / 180);
}

// o is the positon of o3 and o4 as an array
// r1 r2 r3 r4 are the lengths of the bar
double* positionVector(double o[], int r1, int r2, int r3, int r4, double o2) {

    static double retval[2];

    retval[0] = r2*cos(degToRad(o2)) + r3*cos(degToRad(o[0])) - r4*cos(degToRad(o[1])) - r1;
    retval[1] = r2*sin(degToRad(o2)) + r3*sin(degToRad(o[0])) - r4*sin(degToRad(o[1]));

    return retval;
}

void printArray(double array[])
{
  int i;
  for(i = 0; i<2; i++)
    {
      printf("%.2f ", array[i]);
    }
}

int main()
{
    double o[] = {20, 30};
    printf("This is your answer: ");
    printArray(positionVector(o, 5, 3, 2, 1, 10));

    return 0;
}

