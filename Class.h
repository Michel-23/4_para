#pragma once
#include <iostream>
#include <cmath>
#include <cstdint>

class Fraction{
private:
    int32_t _num;
    int32_t _denum;
public:
    Fraction ();

    void SetDenum (int32_t Newdenum);
    void SetNum (int32_t Newnum);

    void Print();
    int CelCh();
    int nod(int32_t first, int32_t second);
    Fraction (int32_t numm, int32_t denumm);
    Fraction (double n);

    //Fraction (const Fraction& fract);

    Fraction operator+ (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum + fraction._num * _denum;
        int32_t new_denum = _denum * fraction._denum;
        Fraction res = Fraction(new_num, new_denum);
        return res;
    }
    
    Fraction operator- (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum - fraction._num * _denum;
        int32_t new_denum = _denum * fraction._denum;
        Fraction res = Fraction(new_num, new_denum);
        return res;
    }

    Fraction operator* (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._num;
        uint32_t new_denom = _denum * fraction._denum;
        Fraction res = Fraction(new_num, new_denom);
        return res;
    }
    
    Fraction operator/ (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum;
        uint32_t new_denom = _denum * fraction._num;
        Fraction res = Fraction(new_num, new_denom);
        return res;
    }

    bool operator> (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum;
        int32_t new_num1 = fraction._num * _denum;
        return (new_num > new_num1);
    }

    bool operator< (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum;
        int32_t new_num1 = fraction._num * _denum;
        return (new_num < new_num1);
    }

    bool operator>= (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum;
        int32_t new_num1 = fraction._num * _denum;
        return (new_num >= new_num1);
    }

    bool operator<= (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum;
        int32_t new_num1 = fraction._num * _denum;
        return (new_num <= new_num1);
    }

    bool operator!= (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum;
        int32_t new_num1 = fraction._num * _denum;
        return !(new_num == new_num1);
    }

    bool operator== (const Fraction& fraction) const{
        int32_t new_num = _num * fraction._denum;
        int32_t new_num1 = fraction._num * _denum;
        return (new_num == new_num1);
    }

    Fraction operator~ (){
        _num = -_num;
        return *this;
    }

    Fraction operator^ (const double st) const{
        int32_t new_num = pow(_num, st);
        int32_t new_denom = pow(_denum, st);
        Fraction res = Fraction(new_num, new_denom);
        return res;
    }

    Fraction& operator++ (){
        _num = _num + _denum;
        return *this;
    }

    Fraction& operator-- (){
        _num = _num - _denum;
        return *this;
    }

    Fraction operator++ (int32_t){
        Fraction res = Fraction(_num, _denum);
        _num = _num + _denum;
        return res;
    }

    Fraction operator-- (int32_t){
        Fraction res = Fraction(_num, _denum);
        _num = _num - _denum;
        return res;
    }

    /*Fraction& operator= (const Fraction& fraction){
        _num = fraction._num;
        _denum = fraction._denum;
        std::cout << "Operator ravno -> " << *this << std::endl;
        return *this;
    }*/

    Fraction operator+ (double right) const{
        Fraction res = *this + Fraction(right);
        return res;
    }

    operator double() const{
        return static_cast<double> (_num) / _denum;
    }

    inline void PrintDouble(){
        std::cout << static_cast<double> (_num) / _denum << std::endl;
    }

    friend std::ostream& operator<< (std::ostream& os, const Fraction& tmp){
        os << tmp._num << "/" << tmp._denum;
        return os;
    }
};