#include <iostream>
#include "color.hpp"

const int WIDTH = 256;
const int HEIGHT = 256;

int main () {
    std::cout << "P3\n" << WIDTH << ' ' << HEIGHT << "\n255\n";

    for (unsigned int j = 0; j < HEIGHT; j ++) {
        std::clog << "\rScanlines remaining: " << (HEIGHT - j) << ' ' << std::flush;
        for (unsigned int i = 0; i < WIDTH; i ++) {
            auto pixel_color = color(double(i)/WIDTH, double(j)/HEIGHT, 0.25);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog << "\rDone.                 \n";
}