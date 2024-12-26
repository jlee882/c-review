#include <stdio.h>
#include <stdlib.h>

int main() {
  const int moonLanding = 1969;
  const int speedOfLight = 299792458;
  const float pi = 3.142;
  const unsigned int hexaDead = 0xDEAD;
  const unsigned int hexaSecret = 51966;

  printf("Moonlanding:\n%010d\n%10d\n", moonLanding, moonLanding);

  printf("SpeedOfLight: %.0f, %.3e\n", (float)speedOfLight, (double)speedOfLight);

  printf("pi: %0.2f, %+0.1e\n", pi, pi);

  printf("hexaDead: %#X, %6u\n", hexaDead, hexaDead);

  printf("hexaSecret %x\n", hexaSecret);

}