#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(-10);
inline pros::Motor top(8);
inline ez::Piston descore('A');
inline ez::Piston matchLoader('B');