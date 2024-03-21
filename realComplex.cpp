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
    /* 2 para

    int32_t num, denum;
    double n;

    std::cout << "Num: " << std:: endl;
    std:: cin >> num;
    std:: cout << std:: endl;

    std::cout << "Denum: " << std:: endl;
    std:: cin >> denum;
    std:: cout << std:: endl;

    std::cout << "Chislo: " << std:: endl;
    std:: cin >> n;
    std:: cout << std:: endl;

    Fraction drob = Fraction (num, denum);
    Fraction drob1 = Fraction (n);

    std:: cout << drob << std::endl;
    std:: cout << drob1 << std::endl;*/

    /* 3 para

    Fraction fract = Fraction(6,4);
    
    Fraction fract_copy = Fraction(fract);
    std::cout << fract_copy << std::endl;

    Fraction result1 = fract + fract_copy;
    std::cout << result1;

    if (fract > fract_copy){ // операция больше
        std::cout << "true" << std::endl;
    }
    else std::cout << "false" << std::endl;

    Fraction result5 = ~fract; // смена знака
    std::cout << result5;

    Fraction result6 = fract++;
    std::cout << fract;*/

    /* 4 para
    Fraction fract = Fraction(6,4);
    Fraction fract1 = Fraction(6,4);

    Complex chislo = Complex(fract, fract1);
    Complex chislo1 = Complex(fract, fract1);

    Complex res = chislo + chislo1;
    std:: cout << chislo << std:: endl;
    std:: cout << res;*/