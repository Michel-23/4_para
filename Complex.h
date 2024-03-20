#pragma once
#include "Class.h"

class Complex{
private:
    Fraction _re;
    Fraction _im;
public:
    Complex ();
    Complex (Fraction re, Fraction im);
    Complex (int32_t num_re, int32_t denum_re, int32_t num_im, int32_t denum_im);

    friend std::ostream& operator<< (std::ostream& os, const Complex& tmp) {
    os << tmp._re;
    if (tmp._im > 0)
        os << " + " << tmp._im << "i" << std::endl;
    else
        os << tmp._im << "i" << std::endl;
    return os;
    }

    Complex operator+ (const Complex& tmp) const{
        Fraction new_re = _re + tmp._re;
        Fraction new_im = _im + tmp._im;
    }
};