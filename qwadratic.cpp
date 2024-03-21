#include "Complex.h"
#include "Class.h"
#include "qwadratic.h"

Qwadratic:: Qwadratic(){
    _x1 = 0;
    _x2 = 0;
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

    _Coef_x2 = Fraction(coef_x2);
    _Coef_x = Fraction(coef_x);
    _Coef = Fraction(coef);
    _D = Fraction();
}

void Qwadratic:: Qwadrat (){
    if (static_cast<double> (_D) > 0){
        Fraction x1 = Fraction ((- _Coef_x + _D^0.5), _Coef_x2 * 2);
        Fraction x2 = Fraction ((- _Coef_x - _D^0.5), _Coef_x2 * 2);
        std:: cout << "x1 = " << x1 << std:: endl;
        std:: cout << "x2 = " << x2 << std:: endl;
        std:: cout << "(x - (" << x1 << ")) * " << "(x - (" << x2 << "))" << " = 0" << std:: endl;
    }
    if (static_cast<double> (_D) == 0){
        Fraction x = Fraction ((- _Coef_x), 2 * _Coef_x2);
        std:: cout << "x = " << x << std:: endl;
        std:: cout << "(x - (" << x << ")) * " << "^2 = 0" << std:: endl;
    }
    if (static_cast<double> (_D) < 0){
        Fraction x1_re = ((-_Coef_x )/ (_Coef_x2 * 2));
        Fraction x1_im = ((-_D)^0.5)/ (_Coef_x2 * 2);
        Fraction x2_re = ((-_Coef_x) / (_Coef_x2 * 2));
        Fraction x2_im = -((((-_D)^0.5) / (_Coef_x2 * 2)));
        x1_re.reduce();
        x1_im.reduce();
        x2_re.reduce();
        x2_im.reduce();
        Complex x1 = Complex (x1_re, x1_im);
        Complex x2 = Complex (x2_re, x2_im);
        std:: cout << "x1 = " << x1 << std:: endl;
        std:: cout << "x2 = " << x2 << std:: endl;
        std:: cout << "(x - (" << x1 << ")) * " << "(x - (" << x2 << "))" << " = 0" << std:: endl;
    }
}

void Qwadratic:: Des (){
    _D = pow(_Coef_x, 2) - (4 * _Coef_x2 * _Coef);
}