#pragma once
#include <iostream>
#include <gmtl/gmtl.h>
#include <gmtl/Vec.h>

using color = gmtl::Vec3f;

void write_color(std::ostream &out, color pixel_color) {
    out << static_cast<int>(255.99 * pixel_color[0]) << ' '
        << static_cast<int>(255.99 * pixel_color[1]) << ' '
        << static_cast<int>(255.99 * pixel_color[2]) << '\n';
}