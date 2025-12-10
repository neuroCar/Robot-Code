#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(7);
inline pros::Motor top(-16);
inline ez::Piston descore('H');

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');