#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc > 2)
    {
        std::cout << "Too many arguments!" << std::endl;
        return(0);
    }
    if (argc < 2)
    {
        std::cout << "Not enough arguments!" << std::endl;
        return(0);
    }
    rpn r(argv[1]);
    r.print_value();
}