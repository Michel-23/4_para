#include "Complex.h"

Complex:: Complex(){
    _re = Fraction();
    _im = Fraction();
}

Complex:: Complex(Fraction re, Fraction im){
    _re = Fraction(re);
    _im = Fraction(im);
}

Complex:: Complex (int32_t num_re, int32_t denum_re, int32_t num_im, int32_t denum_im){
    _re = Fraction(num_re, denum_re);
    _im = Fraction(num_im, denum_im);
}