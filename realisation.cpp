#include "Class.h"
#include "nod.h"

Fraction::Fraction (){
    _num = 0;
    _denum = 1;
}

void Fraction:: SetDenum (int32_t Newdenum){
    if (Newdenum == 0){
        throw "Error";
    }
    _denum = Newdenum;
}

void Fraction:: SetNum (int32_t Newnum){
    _num = Newnum;
}

int Fraction:: CelCh(){
    int temp;
    if (_num > _denum){
        temp = floor (_num / _denum);
    }
    else temp = 0;
    return temp;
}


void Fraction:: Print(){
    int cel = CelCh();
    if (cel == 0){
        std::cout << _num << "/" << _denum << std:: endl;
    }
    else{
        if (_num <= _denum){
            std::cout << cel << " " << _num << "/" << _denum << std:: endl;
        }
        else{
            _num = _num - cel * _denum;
            std::cout << cel << " " << _num << "/" << _denum << std:: endl;
        }
    }
}

Fraction::Fraction (int32_t numm, int32_t denumm){
    int32_t temp = nod (fabs(numm), fabs(denumm));
    if (temp > 1){
        numm /= temp;
        denumm /= temp;
    }
    _num = numm;
    SetDenum (denumm);
}

Fraction:: Fraction(double n){
    int32_t num = (int)(round(n * 1000000));
    int32_t denom = 1000000;
    int temp = nod(fabs(num), fabs(denom));
    if (temp > 1){
        num /= temp;
        denom /= temp;
    }
    _num = num;
    _denum = denom;
}

void Fraction:: reduce (){
    int temp = nod (fabs(_num), fabs(_denum));
    if (temp > 1){
        _num /= temp;
        _denum /= temp;
    }
}

// Fraction::Fraction(const Fraction& fract){
//     _denum = fract._denum;
//     _num = fract._num;
//     std::cout << "Copy constructor -> " << this /*указатель на себя (fract)*/<< std::endl;
// }