#include <iostream>
#include "Class.h"
#include "Complex.h"

void Descriminant (Fraction D, Fraction Coef_x, Fraction Coef_x2){
    if (static_cast<double> (D) > 0){
        Fraction x1 = (- Coef_x + pow(D, 0.5)) / 2 * Coef_x2;
        Fraction x2 = (- Coef_x - pow(D, 0.5)) / 2 * Coef_x2;
        std:: cout << x1 << std:: endl;
        std:: cout << x2 << std:: endl;
    }
    if (static_cast<double> (D) == 0){
        Fraction x = (- Coef_x) / 2 * Coef_x2;
        std:: cout << x << std:: endl;
    }
    if (static_cast<double> (D) < 0){
        Fraction x1_re = (-Coef_x / (2 * Coef_x2));
        Fraction x1_im = pow (fabs(D), 0.5) / (2 * Coef_x2);
        Fraction x2_re = (-Coef_x / (2 * Coef_x2));
        Fraction x2_im = -(pow (fabs(D), 0.5) / (2 * Coef_x2));
        Complex x1 = Complex (x1_re, x1_im);
        Complex x2 = Complex (x2_re, x2_im);
        std:: cout << x1 << std:: endl;
        std:: cout << x2 << std:: endl;
    }
}

int main(){
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

    double coef_x2, coef_x, coef;
    
    std::cout << "Coef x^2: " << std:: endl;
    std:: cin >> coef_x2;
    std:: cout << std:: endl;

    std::cout << "Coef x: " << std:: endl;
    std:: cin >> coef_x;
    std:: cout << std:: endl;

    std::cout << "Coef: " << std:: endl;
    std:: cin >> coef;
    std:: cout << std:: endl;

    Fraction Coef_x2 = Fraction(coef_x2);
    Fraction Coef_x = Fraction(coef_x);
    Fraction Coef = Fraction(coef);
    Fraction D = pow(Coef_x, 2) - (4 * Coef_x2 * Coef);

    Descriminant (D, Coef_x, Coef_x2);
    return 0;
}