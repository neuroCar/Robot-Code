#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup lift({8, -6});
inline ez::Piston claw('A');
inline pros::Motor toggle(13);
inline double LiftLevels[] = {
    0.00,
    900.00,
    1400.00,
    1440.00,
    2180.00,
    2220.00
};