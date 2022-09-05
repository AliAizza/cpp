# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed{
    private:
        int value;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const int v);
        Fixed(const float v);
        Fixed(const Fixed& f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        bool    operator>(const Fixed& f);
        bool    operator<(const Fixed& f);
        bool    operator>=(const Fixed& f);
        bool    operator<=(const Fixed& f);
        bool    operator==(const Fixed& f);
        bool    operator!=(const Fixed& f);
        Fixed   operator+(const Fixed& f);
        Fixed   operator-(const Fixed& f);
        Fixed   operator*(const Fixed& f);
        Fixed   operator/(const Fixed& f);
        Fixed&   operator++(void);
        Fixed   operator++(int);
        Fixed&   operator--(void);
        Fixed   operator--(int);
        static  Fixed& min(Fixed& f1, Fixed& f2);
        static const Fixed& min(const Fixed& f1, const Fixed& f2);
        static  Fixed& max(Fixed& f1, Fixed& f2);
        static const Fixed& max(const Fixed& f1, const Fixed& f2);
};
std::ostream& operator<<(std::ostream& cout, const Fixed& f);
#endif