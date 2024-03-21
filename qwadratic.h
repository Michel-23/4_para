#pragma once
#include <iostream>
#include <cmath>
#include <cstdint>
#include "Class.h"

class Qwadratic{
private:
    Fraction _x1;
    Fraction _x2;
    Fraction _D;
    Fraction _Coef_x2;
    Fraction _Coef_x;
    Fraction _Coef;

public:
    Qwadratic ();
    void Des();
    void Qwadrat ();
};