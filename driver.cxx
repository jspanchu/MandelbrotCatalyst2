#include "Mandelbrot.h"

int main(int argc, char *argv[]) {
  Mandelbrot brot({-1.75, -1.25, 0., 0.}, {2.5, 2.5, 2.0, 1.0}, {256, 256, 256},
                  {0, 1, 3});
}
