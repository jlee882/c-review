#include <stdio.h>
#include <stdlib.h>
#include "formula.h"

int main() {
  double radius;
  printf("enter radius: ");
  scanf("%lf", &radius);

  double volume = sphere_volume(radius);
  double surface_area = sphere_surface_area(radius);
  printf("volume: %.2lf, %.3e\n", volume, volume);
  printf("surface area: %.2lf, %.3e\n", surface_area, surface_area);

  return EXIT_SUCCESS;
}