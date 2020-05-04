/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {
  class HSLAPixel {
    public:
      double h; //0-360 d
      double s; //0.0-1.0
      double l; //0.0-1.0
      double a; //0.0-1.0
  };
}
