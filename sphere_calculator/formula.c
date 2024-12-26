#include <math.h>
#include "formula.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double sphere_volume(double radius) {
  return 4 * M_PI * pow(radius, 3) / 3;
}

double sphere_surface_area(double radius){
  return 4 * M_PI * pow(radius, 2);
}