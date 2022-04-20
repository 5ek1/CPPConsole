
#include"getBMI.h"
double GetBMI(double height, double weight)
{
    double bmi;
    height /= 100;
    bmi = weight / height / height;
    return bmi;
}