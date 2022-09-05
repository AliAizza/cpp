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
};
std::ostream& operator<<(std::ostream& cout, const Fixed& f);
#endif